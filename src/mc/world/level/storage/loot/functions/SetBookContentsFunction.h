#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SetBookContentsFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetBookContentsFunction& operator=(SetBookContentsFunction const&);
    SetBookContentsFunction(SetBookContentsFunction const&);
    SetBookContentsFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?apply@SetBookContentsFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);

    // vIndex: 3, symbol: ?apply@SetBookContentsFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);

    // symbol:
    // ??0SetBookContentsFunction@@QEAA@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@1AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@Z
    MCAPI
    SetBookContentsFunction(std::vector<std::unique_ptr<class LootItemCondition>>&, std::string const&, std::string const&, std::vector<std::string> const&);

    // symbol:
    // ?deserialize@SetBookContentsFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_fillUserData@SetBookContentsFunction@@AEAAXAEAVCompoundTag@@@Z
    MCAPI void _fillUserData(class CompoundTag&);

    // NOLINTEND
};
