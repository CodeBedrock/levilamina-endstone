#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

struct StartGlidingSystem {
public:
    // prevent constructor by default
    StartGlidingSystem& operator=(StartGlidingSystem const&);
    StartGlidingSystem(StartGlidingSystem const&);
    StartGlidingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol:
    // ?tick@StartGlidingSystem@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UActorMovementTickNeededFlag@@@@UPlayerInputRequestComponent@@V?$FlagComponent@UArmorFlyEnabledFlag@@@@UPassengerComponent@@V?$FlagComponent@UOnGroundFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@@@U?$Read@UAbilitiesComponent@@UMoveInputComponent@@UVanillaClientGameplayComponent@@@@U?$Write@USynchedActorDataComponent@@UPlayerActionComponent@@@@U?$AddRemove@UShouldUpdateBoundingBoxRequestComponent@@@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
    virtual void
    tick(class StrictExecutionContext<
         struct Filter<
             class FlagComponent<struct ActorMovementTickNeededFlag>,
             struct PlayerInputRequestComponent,
             class FlagComponent<struct ArmorFlyEnabledFlag>,
             struct PassengerComponent,
             class FlagComponent<struct OnGroundFlag>,
             class FlagComponent<struct PlayerComponentFlag>>,
         struct Read<struct AbilitiesComponent, struct MoveInputComponent, struct VanillaClientGameplayComponent>,
         struct Write<struct SynchedActorDataComponent, struct PlayerActionComponent>,
         struct AddRemove<struct ShouldUpdateBoundingBoxRequestComponent>,
         struct GlobalRead<>,
         struct GlobalWrite<>,
         struct EntityFactoryT<>>&);

    // symbol: ?createSystem@StartGlidingSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
