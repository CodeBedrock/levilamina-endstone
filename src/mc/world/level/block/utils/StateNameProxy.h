#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockDescriptorSerializer {

struct StateNameProxy {
public:
    // prevent constructor by default
    StateNameProxy& operator=(StateNameProxy const&);
    StateNameProxy(StateNameProxy const&);
    StateNameProxy();

public:
    // NOLINTBEGIN
    // symbol: ??1StateNameProxy@BlockDescriptorSerializer@@QEAA@XZ
    MCAPI ~StateNameProxy();

    // symbol: ?bindType@StateNameProxy@BlockDescriptorSerializer@@SAXXZ
    MCAPI static void bindType();

    // symbol:
    // ?constructFromString@StateNameProxy@BlockDescriptorSerializer@@SA?AU12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static struct BlockDescriptorSerializer::StateNameProxy constructFromString(std::string const&);

    // NOLINTEND
};

}; // namespace BlockDescriptorSerializer
