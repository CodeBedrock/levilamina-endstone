#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class PluginInterface2 {
public:
    // prevent constructor by default
    PluginInterface2& operator=(PluginInterface2 const&);
    PluginInterface2(PluginInterface2 const&);
    PluginInterface2();
};

}; // namespace RakNet
