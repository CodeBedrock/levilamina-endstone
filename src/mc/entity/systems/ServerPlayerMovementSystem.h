#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerMovementSystem {
public:
    // prevent constructor by default
    ServerPlayerMovementSystem& operator=(ServerPlayerMovementSystem const&);
    ServerPlayerMovementSystem(ServerPlayerMovementSystem const&);
    ServerPlayerMovementSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_updateFallDistance@ServerPlayerMovementSystem@@SAXAEBUServerPlayerCurrentMovementComponent@@AEBUStateVectorComponent@@AEAUFallDistanceComponent@@@Z
    MCAPI static void
    _updateFallDistance(struct ServerPlayerCurrentMovementComponent const&, struct StateVectorComponent const&, struct FallDistanceComponent&);

    // symbol: ?createPostInputSystems@ServerPlayerMovementSystem@@SA?AV?$array@UTickingSystemWithInfo@@$01@std@@XZ
    MCAPI static std::array<struct TickingSystemWithInfo, 2> createPostInputSystems();

    // symbol: ?createPostTravelSystems@ServerPlayerMovementSystem@@SA?AV?$array@UTickingSystemWithInfo@@$03@std@@XZ
    MCAPI static std::array<struct TickingSystemWithInfo, 4> createPostTravelSystems();

    // symbol: ?createPreInputSystems@ServerPlayerMovementSystem@@SA?AV?$array@UTickingSystemWithInfo@@$02@std@@XZ
    MCAPI static std::array<struct TickingSystemWithInfo, 3> createPreInputSystems();

    // symbol: ?createServerPlayerMovementFinalSystem@ServerPlayerMovementSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createServerPlayerMovementFinalSystem();

    // NOLINTEND
};
