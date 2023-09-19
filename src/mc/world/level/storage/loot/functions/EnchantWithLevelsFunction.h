#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class EnchantWithLevelsFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    EnchantWithLevelsFunction& operator=(EnchantWithLevelsFunction const&);
    EnchantWithLevelsFunction(EnchantWithLevelsFunction const&);
    EnchantWithLevelsFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?apply@EnchantWithLevelsFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);

    // vIndex: 2, symbol:
    // ?apply@EnchantWithLevelsFunction@@UEAAHAEAVItemStack@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
    virtual int apply(class ItemStack&, class Random&, struct Trade const&, class LootTableContext&);

    // vIndex: 3, symbol: ?apply@EnchantWithLevelsFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);

    // vIndex: 4, symbol:
    // ?apply@EnchantWithLevelsFunction@@UEAAHAEAVItemInstance@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
    virtual int apply(class ItemInstance&, class Random&, struct Trade const&, class LootTableContext&);

    // NOLINTEND
};
