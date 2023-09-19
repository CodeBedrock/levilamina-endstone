#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockLiquidContainerComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class BaseScriptBlockLiquidContainerComponent; }
namespace ScriptModuleMinecraft { class ScriptColor; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockWaterContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent {
public:
    // prevent constructor by default
    ScriptBlockWaterContainerComponent& operator=(ScriptBlockWaterContainerComponent const&);
    ScriptBlockWaterContainerComponent(ScriptBlockWaterContainerComponent const&);
    ScriptBlockWaterContainerComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptBlockWaterContainerComponent();

    // symbol:
    // ?addDye@ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X@Scripting@@AEBVScriptItemType@2@@Z
    MCAPI class Scripting::Result<void> addDye(class ScriptModuleMinecraft::ScriptItemType const&);

    // symbol:
    // ?getCustomColor@ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@VScriptColor@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::Result<class ScriptModuleMinecraft::ScriptColor> getCustomColor();

    // symbol: ??4ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptBlockWaterContainerComponent&
    operator=(class ScriptModuleMinecraft::ScriptBlockWaterContainerComponent&&);

    // symbol:
    // ?setCustomColor@ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X@Scripting@@AEBVScriptColor@2@@Z
    MCAPI class Scripting::Result<void> setCustomColor(class ScriptModuleMinecraft::ScriptColor const&);

    // symbol:
    // ?bind@ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockWaterContainerComponent>
    bind();

    // symbol:
    // ?tryCreate@ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@@Scripting@@AEAVBlockSource@@VBlockPos@@AEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<
        class ScriptModuleMinecraft::ScriptBlockWaterContainerComponent>
    tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);

    // symbol: ?ComponentId@ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
