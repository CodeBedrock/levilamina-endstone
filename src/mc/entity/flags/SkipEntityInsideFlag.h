#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkipEntityInsideFlag {
public:
    // prevent constructor by default
    SkipEntityInsideFlag& operator=(SkipEntityInsideFlag const&);
    SkipEntityInsideFlag(SkipEntityInsideFlag const&);
    SkipEntityInsideFlag();
};
