#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockPlaceAfterEvent {
public:
    // prevent constructor by default
    ScriptBlockPlaceAfterEvent& operator=(ScriptBlockPlaceAfterEvent const&);
    ScriptBlockPlaceAfterEvent(ScriptBlockPlaceAfterEvent const&);
    ScriptBlockPlaceAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptBlockPlaceAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockPlaceAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockPlaceAfterEvent&&);

    // symbol: ??1ScriptBlockPlaceAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptBlockPlaceAfterEvent();

    // symbol:
    // ?bind@ScriptBlockPlaceAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptBlockPlaceAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockPlaceAfterEvent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
