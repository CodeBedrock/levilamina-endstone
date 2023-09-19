#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPositionOutOfWorldBoundsError {
public:
    // prevent constructor by default
    ScriptPositionOutOfWorldBoundsError& operator=(ScriptPositionOutOfWorldBoundsError const&);
    ScriptPositionOutOfWorldBoundsError(ScriptPositionOutOfWorldBoundsError const&);
    ScriptPositionOutOfWorldBoundsError();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPositionOutOfWorldBoundsError@ScriptModuleMinecraft@@QEAA@AEBVVec3@@@Z
    MCAPI explicit ScriptPositionOutOfWorldBoundsError(class Vec3 const&);

    // symbol:
    // ??0ScriptPositionOutOfWorldBoundsError@ScriptModuleMinecraft@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@@Z
    MCAPI ScriptPositionOutOfWorldBoundsError(std::string const&, class Vec3 const&);

    // symbol: ??1ScriptPositionOutOfWorldBoundsError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptPositionOutOfWorldBoundsError();

    // symbol:
    // ?bind@ScriptPositionOutOfWorldBoundsError@ScriptModuleMinecraft@@SA?AV?$ErrorBindingBuilder@UScriptPositionOutOfWorldBoundsError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptPositionOutOfWorldBoundsError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
