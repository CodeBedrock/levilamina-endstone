#include "ll/core/mod/ModRegistrar.h"

#include <chrono>
#include <cstddef>
#include <filesystem>
#include <memory>
#include <mutex>
#include <ranges>
#include <string>
#include <string_view>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

#include "ll/api/data/DependencyGraph.h"
#include "ll/api/data/Version.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/mod/Manifest.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/mod/ModManager.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/mod/NativeModManager.h"

#include "ll/api/command/CommandRegistrar.h"

#include "mc/external/expected_lite/expected.h"
#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

#include "nlohmann/json.hpp"
#include "nlohmann/json_fwd.hpp"

#include "pl/Config.h"

namespace ll::command {
enum class ModNames {};
}

namespace ll::mod {
using namespace ::ll::i18n_literals;

struct ModRegistrar::Impl {
    std::recursive_mutex               mutex;
    data::DependencyGraph<std::string> deps;
};

ModRegistrar::ModRegistrar() : impl(std::make_unique<Impl>()) {}
ModRegistrar::~ModRegistrar() = default;

static bool checkVersion(Manifest const& real, Dependency const& need) {
    if (!real.version || !need.version) {
        return true;
    }
    return real.version->major == need.version->major && (*real.version) >= (*need.version);
}
static Expected<Manifest> loadManifest(std::filesystem::path const& dir) {
    auto content = file_utils::readFile(dir / u8"manifest.json");
    if (!content || content->empty()) {
        return makeSuccessError();
    }
    auto json = nlohmann::json::parse(*content, nullptr, false, true);
    if (json.is_discarded()) {
        return makeStringError("Manifest is not a valid JSON text"_tr());
    }
    return ::ll::reflection::deserialize_to<Manifest>(json).and_then([&](auto&& manifest) -> Expected<Manifest> {
        using namespace pl;
        if (manifest.type == pl::pl_mod_manager_name) {
            return makeSuccessError(); // bypass preloader mod
        }
        if (std::string dirName = string_utils::u8str2str(dir.filename().u8string()); manifest.name != dirName) {
            return makeStringError("Mod name {0} do not match folder {1}"_tr(manifest.name, dirName));
        }
        return manifest;
    });
}

ModRegistrar& ModRegistrar::getInstance() {
    static ModRegistrar instance;
    return instance;
}

void ModRegistrar::loadAllMods() {
    std::lock_guard lock(impl->mutex);

    std::unordered_map<std::string, Manifest> manifests;

    getLogger().info("Loading mods..."_tr());

    auto& registry = ModManagerRegistry::getInstance();

    if (!registry.addManager(std::make_shared<NativeModManager>())) {
        getLogger().error("Failed to create native mod manager"_tr());
        return;
    }

    for (auto& file : std::filesystem::directory_iterator(getModsRoot())) {
        if (!file.is_directory()) {
            continue;
        }
        if (auto res = loadManifest(file.path()).transform([&](auto&& manifest) {
                manifests.try_emplace(manifest.name, std::forward<decltype((manifest))>(manifest));
            });
            !res) {
            if (res.error()) {
                getLogger().error(
                    "Failed to load manifest for {0}"_tr(string_utils::u8str2str(file.path().stem().u8string()))
                );
                res.error().log(getLogger().error);
            }
            continue;
        }
    }

    std::unordered_set<std::string> needLoad;
    for (auto& [name, manifest] : manifests) {
        if (manifest.passive == true) {
            continue;
        }
        if (manifest.dependencies) {
            bool error = false;
            for (auto& dependency : *manifest.dependencies) {
                if (!manifests.contains(dependency.name) || !checkVersion(manifests.at(dependency.name), dependency)) {
                    error = true;
                    getLogger().error("Missing dependency {0}"_tr(
                        dependency.version
                            .transform([&](auto& ver) {
                                return fmt::format("{} v{}", dependency.name, ver.to_string());
                            })
                            .value_or(dependency.name)
                    ));
                }
            }
            if (error) {
                getLogger().error("The dependencies of {0} are missing, will not be loaded"_tr(name));
                continue;
            }
            for (auto& dependency : *manifest.dependencies) {
                needLoad.emplace(dependency.name);
            }
        }
        needLoad.emplace(name);
        if (manifest.optionalDependencies) {
            for (auto& dependency : *manifest.optionalDependencies) {
                if (manifests.contains(dependency.name) && checkVersion(manifests.at(dependency.name), dependency)) {
                    needLoad.emplace(dependency.name);
                }
            }
        }
    }
    std::vector<std::string> conflicts;
    for (auto& name : needLoad) {
        auto& manifest = manifests.at(name);
        if (!manifest.conflicts) {
            continue;
        }
        for (auto& conflict : *manifest.conflicts) {
            if (manifests.contains(conflict.name) && checkVersion(manifests.at(conflict.name), conflict)) {
                conflicts.emplace_back(name);
                getLogger().error("{0} conflicts with {1}"_tr(
                    name,
                    conflict.version
                        .transform([&](auto& ver) { return fmt::format("{} v{}", conflict.name, ver.to_string()); })
                        .value_or(conflict.name)
                ));
            }
        }
    }
    for (auto& name : conflicts) {
        needLoad.erase(name);
    }
    for (auto& name : needLoad) {
        auto& manifest = manifests.at(name);
        if (manifest.dependencies) {
            bool deniedByConflict = false;
            for (auto& dependency : *manifest.dependencies) {
                if (!needLoad.contains(dependency.name)) {
                    deniedByConflict = true;
                }
            }
            if (deniedByConflict) {
                getLogger().error("The dependencies of {0} are in conflict, will not be loaded"_tr(name));
                continue;
            }
            for (auto& dependency : *manifest.dependencies) {
                impl->deps.emplaceDependency(name, dependency.name);
            }
        } else {
            impl->deps.emplace(name);
        }
        if (manifest.optionalDependencies) {
            for (auto& dependency : *manifest.optionalDependencies) {
                if (needLoad.contains(dependency.name)) {
                    impl->deps.emplaceDependency(name, dependency.name);
                }
            }
        }
        if (manifest.loadBefore) {
            for (auto& dependency : *manifest.loadBefore) {
                if (needLoad.contains(dependency.name) && checkVersion(manifests.at(dependency.name), dependency)) {
                    impl->deps.emplaceDependency(dependency.name, name);
                }
            }
        }
    }
    auto sort = impl->deps.sort();
    for (auto& name : sort.unsorted) {
        getLogger().error("The dependencies of {0} are in loops, will not be loaded"_tr(name));
    }

    std::unordered_set<std::string> loadErrored;
    for (auto& name : sort.sorted) {
        auto& manifest = manifests.at(name);
        if (manifest.dependencies) {
            bool deniedByDepError = false;
            for (auto& dependency : *manifest.dependencies) {
                if (loadErrored.contains(dependency.name)) {
                    deniedByDepError = true;
                }
            }
            if (deniedByDepError) {
                getLogger().error("The dependencies of {0} is not loaded, will not be loaded"_tr(name));
                loadErrored.emplace(name);
                continue;
            }
        }
        getLogger().info("Loading {0} v{1}"_tr(name, manifest.version.value_or(data::Version{0, 0, 0})));
        if (auto res = registry.loadMod(std::move(manifest)); res) {
            getLogger().info("{0} loaded"_tr(name));
        } else {
            loadErrored.emplace(name);
            getLogger().error("Failed to load mod {0}"_tr(name));
            res.error().log(getLogger().error);
        }
    }
    size_t loadedCount = sort.sorted.size() - loadErrored.size();

    for (auto& errored : std::ranges::reverse_view(sort.sorted)) {
        if (loadErrored.contains(errored)) impl->deps.erase(errored);
    }
    static ll::memory::HookRegistrar<EnableAllMods, DisableAllMods> reg;

    getLogger().info("{0} mod(s) loaded"_tr(loadedCount));
}

std::vector<std::string> ModRegistrar::getSortedModNames() const {
    std::lock_guard lock(impl->mutex);
    return impl->deps.sort().sorted;
}

LL_TYPE_INSTANCE_HOOK(
    ModRegistrar::EnableAllMods,
    ll::memory::HookPriority::High,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);
    auto& registrar = ModRegistrar::getInstance();
    auto  names     = registrar.getSortedModNames();
    {
        using namespace ll::command;
        CommandRegistrar::getInstance().tryRegisterSoftEnum(enum_name_v<ModNames>, names);
    }
    if (!names.empty()) {
        getLogger().info("Enabling mods..."_tr());

        auto   begin = std::chrono::steady_clock::now();
        size_t count{};
        for (auto& name : names) {
            auto mod = ModManagerRegistry::getInstance().getMod(name);
            if (!mod) continue;
            if (mod->isEnabled()) continue;
            getLogger().info("Enabling {0} v{1}"_tr(name, mod->getManifest().version.value_or(data::Version{0, 0, 0})));
            if (auto res = registrar.enableMod(name); res) {
                count++;
            } else {
                getLogger().error("Failed to enable mod {0}"_tr(name));
                res.error().log(getLogger().error);
            }
        }
        if (count > 0) {
            getLogger().info("{0} mod(s) enabled in ({1:.1f}s)"_tr(
                count,
                std::chrono::duration_cast<std::chrono::duration<double>>(std::chrono::steady_clock::now() - begin)
                    .count()
            ));
        }
    }
    setServerStatus(ServerStatus::Running);
}
LL_TYPE_INSTANCE_HOOK(
    ModRegistrar::DisableAllMods,
    HookPriority::Low,
    ServerInstance,
    &ServerInstance::leaveGameSync,
    void
) {
    setServerStatus(ServerStatus::Stopping);
    auto& registrar = ModRegistrar::getInstance();
    auto  names     = registrar.getSortedModNames();
    if (!names.empty()) {
        getLogger().info("Disabling mods..."_tr());
        for (auto& name : std::ranges::reverse_view(names)) {
            auto mod = ModManagerRegistry::getInstance().getMod(name);
            if (!mod) continue;
            if (mod->isDisabled()) continue;
            getLogger().info("Disabling {0} v{1}"_tr(name, mod->getManifest().version.value_or(data::Version{0, 0, 0}))
            );
            if (auto res = registrar.disableMod(name); !res) {
                res.error().log(getLogger().warn);
            }
        }
    }
    origin();
}

Expected<> ModRegistrar::loadMod(std::string_view name) noexcept {
    std::lock_guard lock(impl->mutex);
    auto            res = loadManifest(getModsRoot() / string_utils::sv2u8sv(name));
    if (!res) {
        if (res.error()) {
            return forwardError(makeStringError("Failed to load manifest for {0}"_tr(name)).value().join(res.error()));
        } else {
            return makeStringError("Mod does not exist, or the manifest is empty"_tr());
        }
    }
    auto& manifest = *res;
    auto& reg      = ModManagerRegistry::getInstance();
    if (manifest.dependencies) {
        for (auto& dependency : *manifest.dependencies) {
            if (!reg.hasMod(dependency.name) || !checkVersion(reg.getMod(dependency.name)->getManifest(), dependency)) {
                return makeStringError("Missing dependency {0}"_tr(
                    dependency.version
                        .transform([&](auto& ver) { return fmt::format("{} v{}", dependency.name, ver.to_string()); })
                        .value_or(dependency.name)
                ));
            }
        }
    }
    if (manifest.conflicts) {
        for (auto& conflict : *manifest.conflicts) {
            if (reg.hasMod(conflict.name) && checkVersion(reg.getMod(conflict.name)->getManifest(), conflict)) {
                return makeStringError("{0} conflicts with {1}"_tr(
                    name,
                    conflict.version
                        .transform([&](auto& ver) { return fmt::format("{} v{}", conflict.name, ver.to_string()); })
                        .value_or(conflict.name)
                ));
            }
        }
    }
    return reg.loadMod(std::move(manifest)).transform([&, this]() {
        impl->deps.emplace(std::string{name});
        {
            using namespace ll::command;
            CommandRegistrar::getInstance().addSoftEnumValues(enum_name_v<ModNames>, {std::string{name}});
        }
    });
}
Expected<> ModRegistrar::unloadMod(std::string_view name) noexcept {
    std::lock_guard lock(impl->mutex);
    auto            dependents = impl->deps.dependentBy(std::string{name});
    if (!dependents.empty()) {
        return makeStringError("{0} still depends on {1}"_tr(dependents, name));
    }
    return ModManagerRegistry::getInstance().unloadMod(name).transform([&, this]() {
        impl->deps.erase(std::string{name});
    });
}
Expected<> ModRegistrar::enableMod(std::string_view name) noexcept {
    std::lock_guard lock(impl->mutex);
    auto&           registry   = ModManagerRegistry::getInstance();
    auto            dependents = impl->deps.dependentOn(std::string{name});
    std::erase_if(dependents, [&](auto& name) {
        if (auto ptr = registry.getMod(name); ptr) {
            return ptr->isEnabled();
        }
        return false;
    });
    if (!dependents.empty()) {
        return makeStringError("Dependency {0} of {1} is not enabled"_tr(dependents, name));
    }
    return registry.enableMod(name);
}
Expected<> ModRegistrar::disableMod(std::string_view name) noexcept {
    std::lock_guard lock(impl->mutex);
    auto&           registry   = ModManagerRegistry::getInstance();
    auto            dependents = impl->deps.dependentBy(std::string{name});
    std::erase_if(dependents, [&](auto& name) {
        if (auto ptr = registry.getMod(name); ptr) {
            return ptr->isDisabled();
        }
        return true;
    });
    if (!dependents.empty()) {
        return makeStringError("{0} still depends on {1}"_tr(dependents, name));
    }
    return registry.disableMod(name);
}
} // namespace ll::mod
