#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class PassengerPositionSelfSystem {
public:
    // prevent constructor by default
    PassengerPositionSelfSystem& operator=(PassengerPositionSelfSystem const&);
    PassengerPositionSelfSystem(PassengerPositionSelfSystem const&);
    PassengerPositionSelfSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@PassengerPositionSelfSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doPassengerPositionSelfSystem@PassengerPositionSelfSystem@@CAXAEBVStrictEntityContext@@AEBUPassengerComponent@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UPositionPassengerRequestComponent@@@@@Z
    MCAPI static void
    _doPassengerPositionSelfSystem(class StrictEntityContext const&, struct PassengerComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PositionPassengerRequestComponent>);

    // symbol:
    // ?_tickPassengerPositionSelfSystem@PassengerPositionSelfSystem@@CAXV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@$$CBUPassengerComponent@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UPositionPassengerRequestComponent@@@@@Z
    MCAPI static void
        _tickPassengerPositionSelfSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct PassengerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PositionPassengerRequestComponent>);

    // NOLINTEND
};
