#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRecordPlayerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockRecordPlayerComponent& operator=(ScriptBlockRecordPlayerComponent const&);
    ScriptBlockRecordPlayerComponent(ScriptBlockRecordPlayerComponent const&);
    ScriptBlockRecordPlayerComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptBlockRecordPlayerComponent();

    // symbol:
    // ?bind@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockRecordPlayerComponent>
    bind();

    // symbol: ?ComponentId@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?clearRecord@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@IEAA?AV?$Result@X@Scripting@@XZ
    MCAPI class Scripting::Result<void> clearRecord();

    // symbol: ?isPlaying@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@IEAA?AV?$Result@_N@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isPlaying();

    // symbol:
    // ?setRecord@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@IEAA?AV?$Result@X@Scripting@@AEBVScriptItemType@2@@Z
    MCAPI class Scripting::Result<void> setRecord(class ScriptModuleMinecraft::ScriptItemType const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
