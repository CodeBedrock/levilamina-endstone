#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class UseActorNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    UseActorNode& operator=(UseActorNode const&);
    UseActorNode(UseActorNode const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?tick@UseActorNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor&);

    // symbol: ??0UseActorNode@@QEAA@XZ
    MCAPI UseActorNode();

    // NOLINTEND
};
