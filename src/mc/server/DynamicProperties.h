#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DynamicProperties {
public:
    // prevent constructor by default
    DynamicProperties& operator=(DynamicProperties const&);
    DynamicProperties(DynamicProperties const&);
    DynamicProperties();

public:
    // NOLINTBEGIN
    // symbol: ?deserialize@DynamicProperties@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void deserialize(class CompoundTag const&);

    // symbol: ?getCollectionCount@DynamicProperties@@QEBA_KXZ
    MCAPI uint64 getCollectionCount() const;

    // symbol:
    // ?getDynamicProperty@DynamicProperties@@QEAAPEAV?$variant@M_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@0@Z
    MCAPI std::variant<float, bool, std::string>* getDynamicProperty(std::string const&, std::string const&);

    // symbol: ?registerLevelStorageManagerListener@DynamicProperties@@QEAAXAEAVLevelStorageManager@@@Z
    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager&);

    // symbol:
    // ?removeDynamicProperty@DynamicProperties@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI bool removeDynamicProperty(std::string const&, std::string const&);

    // symbol:
    // ?serialize@DynamicProperties@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> serialize() const;

    // symbol:
    // ?setDynamicProperty@DynamicProperties@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$variant@M_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@3@0@Z
    MCAPI void
    setDynamicProperty(std::string const&, std::variant<float, bool, std::string> const&, std::string const&);

    // symbol: ?writeToLevelStorage@DynamicProperties@@QEAAXAEAVLevelStorage@@@Z
    MCAPI void writeToLevelStorage(class LevelStorage&);

    // symbol: ??1DynamicProperties@@QEAA@XZ
    MCAPI ~DynamicProperties();

    // symbol: ?bindType@DynamicProperties@@SAXXZ
    MCAPI static void bindType();

    // symbol:
    // ?readFromLevelStorage@DynamicProperties@@SA?AV?$unique_ptr@VDynamicProperties@@U?$default_delete@VDynamicProperties@@@std@@@std@@AEAVLevelStorage@@@Z
    MCAPI static std::unique_ptr<class DynamicProperties> readFromLevelStorage(class LevelStorage&);

    // symbol:
    // ?validateDynamicProperty@DynamicProperties@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUDynamicPropertyDefinition@@AEBV23@PEBV?$variant@M_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@3@@Z
    MCAPI static std::string
    validateDynamicProperty(struct DynamicPropertyDefinition const*, std::string const&, std::variant<float, bool, std::string> const*);

    // symbol: ?STORAGE_TAG@DynamicProperties@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STORAGE_TAG;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getPropertyVariant@DynamicProperties@@CA?AVmeta_any@entt@@AEBV?$variant@M_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI static entt::meta_any _getPropertyVariant(std::variant<float, bool, std::string> const&);

    // NOLINTEND
};
