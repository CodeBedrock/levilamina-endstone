#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolActorRule {
public:
    // prevent constructor by default
    StructurePoolActorRule& operator=(StructurePoolActorRule const&);
    StructurePoolActorRule(StructurePoolActorRule const&);
    StructurePoolActorRule();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0StructurePoolActorRule@@QEAA@$$QEAV?$unique_ptr@VIStructurePoolActorPredicate@@U?$default_delete@VIStructurePoolActorPredicate@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z
    MCAPI StructurePoolActorRule(std::unique_ptr<class IStructurePoolActorPredicate>&&, std::string);

    // NOLINTEND
};
