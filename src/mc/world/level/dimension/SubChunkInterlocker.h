#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkInterlocker {
public:
    // prevent constructor by default
    SubChunkInterlocker& operator=(SubChunkInterlocker const&);
    SubChunkInterlocker(SubChunkInterlocker const&);
    SubChunkInterlocker();

public:
    // NOLINTBEGIN
    // symbol: ?tryLock3x3xN@SubChunkInterlocker@@QEAA_NAEBVSubChunkPos@@H@Z
    MCAPI bool tryLock3x3xN(class SubChunkPos const&, int);

    // symbol: ?unlock3x3xN@SubChunkInterlocker@@QEAAXAEBVSubChunkPos@@H@Z
    MCAPI void unlock3x3xN(class SubChunkPos const&, int);

    // NOLINTEND
};
