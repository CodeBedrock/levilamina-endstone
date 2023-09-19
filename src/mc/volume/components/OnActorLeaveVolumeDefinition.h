#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnActorLeaveVolumeDefinition {
public:
    // prevent constructor by default
    OnActorLeaveVolumeDefinition& operator=(OnActorLeaveVolumeDefinition const&);
    OnActorLeaveVolumeDefinition(OnActorLeaveVolumeDefinition const&);
    OnActorLeaveVolumeDefinition();

public:
    // NOLINTBEGIN
    // symbol: ??4OnActorLeaveVolumeDefinition@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct OnActorLeaveVolumeDefinition& operator=(struct OnActorLeaveVolumeDefinition&&);

    // symbol: ??1OnActorLeaveVolumeDefinition@@QEAA@XZ
    MCAPI ~OnActorLeaveVolumeDefinition();

    // symbol: ?bindType@OnActorLeaveVolumeDefinition@@SAXXZ
    MCAPI static void bindType();

    // symbol: ?NAME@OnActorLeaveVolumeDefinition@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NAME;

    // NOLINTEND
};
