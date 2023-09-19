#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTraitFactory {
public:
    // BlockTraitFactory inner types declare
    // clang-format off
    struct Constructor;
    // clang-format on

    // BlockTraitFactory inner types define
    struct Constructor {
    public:
        // prevent constructor by default
        Constructor& operator=(Constructor const&);
        Constructor(Constructor const&);
        Constructor();

    public:
        // NOLINTBEGIN
        // symbol: ??1Constructor@BlockTraitFactory@@QEAA@XZ
        MCAPI ~Constructor();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockTraitFactory& operator=(BlockTraitFactory const&);
    BlockTraitFactory(BlockTraitFactory const&);
    BlockTraitFactory();

public:
    // NOLINTBEGIN
    // symbol: ??1BlockTraitFactory@@QEAA@XZ
    MCAPI ~BlockTraitFactory();

    // symbol: ?registerAllTraits@BlockTraitFactory@@SAXXZ
    MCAPI static void registerAllTraits();

    // symbol:
    // ?mRegisteredTraits@BlockTraitFactory@@2V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UConstructor@BlockTraitFactory@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UConstructor@BlockTraitFactory@@@std@@@2@@std@@A
    MCAPI static std::unordered_map<std::string, struct BlockTraitFactory::Constructor> mRegisteredTraits;

    // NOLINTEND
};
