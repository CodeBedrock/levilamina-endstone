#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockTypes {
public:
    // prevent constructor by default
    ScriptBlockTypes& operator=(ScriptBlockTypes const&);
    ScriptBlockTypes(ScriptBlockTypes const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptBlockTypes@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ScriptBlockTypes();

    // symbol:
    // ?get@ScriptBlockTypes@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@AEAVWeakLifetimeScope@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>
    get(class Scripting::WeakLifetimeScope&, std::string const&);

    // symbol:
    // ?bind@ScriptBlockTypes@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockTypes@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockTypes> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
