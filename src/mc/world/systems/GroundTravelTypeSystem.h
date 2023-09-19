#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GroundTravelTypeSystem {
public:
    // prevent constructor by default
    GroundTravelTypeSystem& operator=(GroundTravelTypeSystem const&);
    GroundTravelTypeSystem(GroundTravelTypeSystem const&);
    GroundTravelTypeSystem();

public:
    // NOLINTBEGIN
    // symbol: ?calcMoveRelativeSpeed@GroundTravelTypeSystem@@SAMAEBUIMobMovementProxy@@AEBVIConstBlockSource@@@Z
    MCAPI static float calcMoveRelativeSpeed(struct IMobMovementProxy const&, class IConstBlockSource const&);

    // symbol: ?create@GroundTravelTypeSystem@@SA?AUTickingSystemWithInfo@@AEBVBaseGameVersion@@@Z
    MCAPI static struct TickingSystemWithInfo create(class BaseGameVersion const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?FRICTION_FIX_VERSION@GroundTravelTypeSystem@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const FRICTION_FIX_VERSION;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $FRICTION_FIX_VERSION() { return FRICTION_FIX_VERSION; }

    // NOLINTEND
};
