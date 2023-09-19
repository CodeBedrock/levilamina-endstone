#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class Features {
public:
    // prevent constructor by default
    Features& operator=(Features const&);
    Features(Features const&);
    Features();

public:
    // NOLINTBEGIN
    // symbol: ?strictMode@Features@Json@@SA?AV12@XZ
    MCAPI static class Json::Features strictMode();

    // NOLINTEND
};

}; // namespace Json
