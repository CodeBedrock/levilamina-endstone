#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class LootingEnchantFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    LootingEnchantFunction& operator=(LootingEnchantFunction const&);
    LootingEnchantFunction(LootingEnchantFunction const&);
    LootingEnchantFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?apply@LootingEnchantFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);

    // vIndex: 3, symbol: ?apply@LootingEnchantFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);

    // NOLINTEND
};
