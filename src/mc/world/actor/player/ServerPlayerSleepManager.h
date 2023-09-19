#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/actor/player/PlayerSleepManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ServerPlayerSleepManager : public ::PlayerSleepManager {
public:
    // prevent constructor by default
    ServerPlayerSleepManager& operator=(ServerPlayerSleepManager const&);
    ServerPlayerSleepManager(ServerPlayerSleepManager const&);
    ServerPlayerSleepManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?updateSleepingPlayerList@ServerPlayerSleepManager@@UEAAXXZ
    virtual void updateSleepingPlayerList();

    // symbol: ??1ServerPlayerSleepManager@@UEAA@XZ
    MCVAPI ~ServerPlayerSleepManager();

    // symbol: ??0ServerPlayerSleepManager@@QEAA@V?$not_null@V?$NonOwnerPointer@VGameplayUserManager@@@Bedrock@@@gsl@@@Z
    MCAPI explicit ServerPlayerSleepManager(gsl::not_null<class Bedrock::NonOwnerPointer<class GameplayUserManager>>);

    // symbol: ?initializeWithPlayerDeathManager@ServerPlayerSleepManager@@QEAAXAEAVPlayerDeathManager@@@Z
    MCAPI void initializeWithPlayerDeathManager(class PlayerDeathManager&);

    // symbol:
    // ?registerOnPlayerWakeUp@ServerPlayerSleepManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVPlayer@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription registerOnPlayerWakeUp(std::function<void(class Player&)>);

    // symbol:
    // ?registerOnSleepingPlayerListUpdated@ServerPlayerSleepManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEBUPlayerSleepStatus@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription
        registerOnSleepingPlayerListUpdated(std::function<void(struct PlayerSleepStatus const&)>);

    // symbol:
    // ?registerOnWakeUpAllPlayers@ServerPlayerSleepManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXXZ@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription registerOnWakeUpAllPlayers(std::function<void(void)>);

    // symbol: ?setShouldSendSleepMessage@ServerPlayerSleepManager@@QEAAX_N@Z
    MCAPI void setShouldSendSleepMessage(bool);

    // symbol: ?shouldSendSleepMessage@ServerPlayerSleepManager@@QEBA_NXZ
    MCAPI bool shouldSendSleepMessage() const;

    // symbol: ?tickCheckToWakeUpPlayers@ServerPlayerSleepManager@@QEAAXXZ
    MCAPI void tickCheckToWakeUpPlayers();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_awakenAllPlayers@ServerPlayerSleepManager@@AEAAXXZ
    MCAPI void _awakenAllPlayers();

    // symbol: ?_onPlayerDeath@ServerPlayerSleepManager@@AEAAXAEAVPlayer@@@Z
    MCAPI void _onPlayerDeath(class Player&);

    // NOLINTEND
};
