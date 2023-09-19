#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class WeakRefT {
public:
    // prevent constructor by default
    WeakRefT& operator=(WeakRefT const&);
    WeakRefT(WeakRefT const&);
    WeakRefT();
};
