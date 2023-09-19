#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorMovementProxyComponent {
public:
    // prevent constructor by default
    ActorMovementProxyComponent& operator=(ActorMovementProxyComponent const&);
    ActorMovementProxyComponent(ActorMovementProxyComponent const&);
    ActorMovementProxyComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorMovementProxyComponent@@QEAA@V?$not_null@V?$shared_ptr@UIActorMovementProxy@@@std@@@gsl@@@Z
    MCAPI explicit ActorMovementProxyComponent(gsl::not_null<std::shared_ptr<struct IActorMovementProxy>>);

    // symbol: ?getMovementProxy@ActorMovementProxyComponent@@QEBA?AV?$shared_ptr@$$CBUIActorMovementProxy@@@std@@XZ
    MCAPI std::shared_ptr<struct IActorMovementProxy const> getMovementProxy() const;

    // symbol: ?getMovementProxy@ActorMovementProxyComponent@@QEAA?AV?$shared_ptr@UIActorMovementProxy@@@std@@XZ
    MCAPI std::shared_ptr<struct IActorMovementProxy> getMovementProxy();

    // NOLINTEND
};
