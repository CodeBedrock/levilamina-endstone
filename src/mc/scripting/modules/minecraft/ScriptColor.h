#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptColor {
public:
    // prevent constructor by default
    ScriptColor& operator=(ScriptColor const&);
    ScriptColor(ScriptColor const&);
    ScriptColor();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptColor@ScriptModuleMinecraft@@QEAA@AEBVColor@mce@@@Z
    MCAPI explicit ScriptColor(class mce::Color const&);

    // symbol: ?getColor@ScriptColor@ScriptModuleMinecraft@@QEBAAEBVColor@mce@@XZ
    MCAPI class mce::Color const& getColor() const;

    // symbol:
    // ?bind@ScriptColor@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VScriptColor@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptColor> bind();

    // symbol:
    // ?bindV010@ScriptColor@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptColor@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptColor> bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
