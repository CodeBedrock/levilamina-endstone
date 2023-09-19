#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class OwnerPtrT {
public:
    // prevent constructor by default
    OwnerPtrT& operator=(OwnerPtrT const&);
    OwnerPtrT(OwnerPtrT const&);
    OwnerPtrT();
};
