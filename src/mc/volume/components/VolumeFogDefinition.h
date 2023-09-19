#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VolumeFogDefinition {
public:
    // prevent constructor by default
    VolumeFogDefinition& operator=(VolumeFogDefinition const&);
    VolumeFogDefinition(VolumeFogDefinition const&);
    VolumeFogDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@VolumeFogDefinition@@QEBAXAEAVEntityContext@@AEAVVolumeFogComponent@@@Z
    MCAPI void initialize(class EntityContext&, class VolumeFogComponent&) const;

    // symbol: ??1VolumeFogDefinition@@QEAA@XZ
    MCAPI ~VolumeFogDefinition();

    // symbol: ?bindType@VolumeFogDefinition@@SAXXZ
    MCAPI static void bindType();

    // symbol: ?NAME@VolumeFogDefinition@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NAME;

    // NOLINTEND
};
