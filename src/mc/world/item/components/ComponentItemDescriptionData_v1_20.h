#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemDescriptionData_v1_20 {
public:
    // prevent constructor by default
    ComponentItemDescriptionData_v1_20(ComponentItemDescriptionData_v1_20 const&);
    ComponentItemDescriptionData_v1_20();

public:
    // NOLINTBEGIN
    // symbol: ??4ComponentItemDescriptionData_v1_20@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ComponentItemDescriptionData_v1_20& operator=(struct ComponentItemDescriptionData_v1_20 const&);

    // symbol: ??1ComponentItemDescriptionData_v1_20@@QEAA@XZ
    MCAPI ~ComponentItemDescriptionData_v1_20();

    // symbol: ?bindType@ComponentItemDescriptionData_v1_20@@SAXXZ
    MCAPI static void bindType();

    // symbol: ?VERSION@ComponentItemDescriptionData_v1_20@@2VSemVersion@@B
    MCAPI static class SemVersion const VERSION;

    // NOLINTEND
};
