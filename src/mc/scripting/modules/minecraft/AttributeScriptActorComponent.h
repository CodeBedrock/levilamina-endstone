#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class AttributeScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    AttributeScriptActorComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_isValid@AttributeScriptActorComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // vIndex: 2, symbol:
    // ?getCurrent@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@M@Scripting@@XZ
    virtual class Scripting::Result<float> getCurrent() const;

    // vIndex: 3, symbol:
    // ?setCurrent@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N@Scripting@@AEBM@Z
    virtual class Scripting::Result<bool> setCurrent(float const&) const;

    // vIndex: 4, symbol: ?getValue@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@M@Scripting@@XZ
    virtual class Scripting::Result<float> getValue() const;

    // vIndex: 5, symbol:
    // ?getEffectiveMinValue@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@M@Scripting@@XZ
    virtual class Scripting::Result<float> getEffectiveMinValue() const;

    // vIndex: 6, symbol:
    // ?getEffectiveMaxValue@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@M@Scripting@@XZ
    virtual class Scripting::Result<float> getEffectiveMaxValue() const;

    // vIndex: 7, symbol:
    // ?resetToMinValue@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@X@Scripting@@XZ
    virtual class Scripting::Result<void> resetToMinValue() const;

    // vIndex: 8, symbol:
    // ?resetToMaxValue@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@X@Scripting@@XZ
    virtual class Scripting::Result<void> resetToMaxValue() const;

    // vIndex: 9, symbol:
    // ?resetToDefaultValue@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@X@Scripting@@XZ
    virtual class Scripting::Result<void> resetToDefaultValue() const;

    // symbol:
    // ??0AttributeScriptActorComponent@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVAttribute@@@Z
    MCAPI
    AttributeScriptActorComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&, class Attribute const&);

    // symbol: ??0AttributeScriptActorComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI AttributeScriptActorComponent(class ScriptModuleMinecraft::AttributeScriptActorComponent const&);

    // symbol: ??4AttributeScriptActorComponent@ScriptModuleMinecraft@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraft::AttributeScriptActorComponent&
    operator=(class ScriptModuleMinecraft::AttributeScriptActorComponent const&);

    // symbol:
    // ?bind@AttributeScriptActorComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VAttributeScriptActorComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::AttributeScriptActorComponent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
