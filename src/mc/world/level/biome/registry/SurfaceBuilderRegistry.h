#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SurfaceBuilderRegistry {
public:
    // prevent constructor by default
    SurfaceBuilderRegistry& operator=(SurfaceBuilderRegistry const&);
    SurfaceBuilderRegistry(SurfaceBuilderRegistry const&);
    SurfaceBuilderRegistry();

public:
    // NOLINTBEGIN
    // symbol: ?lookupForEntity@SurfaceBuilderRegistry@@QEBAPEAVISurfaceBuilder@@AEAVEntityContext@@@Z
    MCAPI class ISurfaceBuilder* lookupForEntity(class EntityContext&) const;

    // NOLINTEND
};
