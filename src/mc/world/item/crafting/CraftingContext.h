#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class CraftingContext {
public:
    // CraftingContext inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // CraftingContext inner types define
    class Impl {
    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // NOLINTBEGIN
        // symbol: ??0Impl@CraftingContext@@QEAA@V?$not_null@V?$NonOwnerPointer@VILevel@@@Bedrock@@@gsl@@@Z
        MCAPI explicit Impl(gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel>>);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CraftingContext& operator=(CraftingContext const&);
    CraftingContext(CraftingContext const&);
    CraftingContext();

public:
    // NOLINTBEGIN
    // symbol: ??0CraftingContext@@QEAA@V?$not_null@V?$NonOwnerPointer@VILevel@@@Bedrock@@@gsl@@@Z
    MCAPI explicit CraftingContext(gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel>>);

    // symbol: ?copyAndLockMap@CraftingContext@@QEAA_NUActorUniqueID@@0@Z
    MCAPI bool copyAndLockMap(struct ActorUniqueID, struct ActorUniqueID);

    // symbol: ?expandMapById@CraftingContext@@QEAA?AUActorUniqueID@@U2@_N@Z
    MCAPI struct ActorUniqueID expandMapById(struct ActorUniqueID, bool);

    // symbol: ?getBaseGameVersion@CraftingContext@@QEBA?AVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion getBaseGameVersion() const;

    // symbol: ?getMapSavedData@CraftingContext@@QEBAPEAVMapItemSavedData@@UActorUniqueID@@@Z
    MCAPI class MapItemSavedData* getMapSavedData(struct ActorUniqueID) const;

    // symbol: ?getMapSavedData@CraftingContext@@QEBAPEAVMapItemSavedData@@PEBVCompoundTag@@@Z
    MCAPI class MapItemSavedData* getMapSavedData(class CompoundTag const*) const;

    // symbol: ?getTrimMaterialRegistry@CraftingContext@@QEBA?BV?$weak_ptr@$$CBVTrimMaterialRegistry@@@std@@XZ
    MCAPI std::weak_ptr<class TrimMaterialRegistry const> const getTrimMaterialRegistry() const;

    // symbol: ?getTrimPatternRegistry@CraftingContext@@QEAA?BV?$weak_ptr@VTrimPatternRegistry@@@std@@XZ
    MCAPI std::weak_ptr<class TrimPatternRegistry> const getTrimPatternRegistry();

    // symbol: ?getTrimPatternRegistry@CraftingContext@@QEBA?BV?$weak_ptr@$$CBVTrimPatternRegistry@@@std@@XZ
    MCAPI std::weak_ptr<class TrimPatternRegistry const> const getTrimPatternRegistry() const;

    // symbol: ??1CraftingContext@@QEAA@XZ
    MCAPI ~CraftingContext();

    // NOLINTEND
};
