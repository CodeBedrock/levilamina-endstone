#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct BlockFlammableDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockFlammableDescription& operator=(BlockFlammableDescription const&);
    BlockFlammableDescription(BlockFlammableDescription const&);
    BlockFlammableDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?getName@BlockFlammableDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?initializeComponent@BlockFlammableDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponent(class EntityContext&) const;

    // symbol: ?bindType@BlockFlammableDescription@@SAXXZ
    MCAPI static void bindType();

    // symbol: ?CATCH_CHANCE_DEFAULT@BlockFlammableDescription@@2HB
    MCAPI static int const CATCH_CHANCE_DEFAULT;

    // symbol: ?DESTROY_CHANCE_DEFAULT@BlockFlammableDescription@@2HB
    MCAPI static int const DESTROY_CHANCE_DEFAULT;

    // symbol: ?NameID@BlockFlammableDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
