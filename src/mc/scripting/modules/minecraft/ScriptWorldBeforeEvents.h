#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemDefinitionBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionBeforeEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldBeforeEvents {
public:
    // prevent constructor by default
    ScriptWorldBeforeEvents& operator=(ScriptWorldBeforeEvents const&);
    ScriptWorldBeforeEvents(ScriptWorldBeforeEvents const&);
    ScriptWorldBeforeEvents();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?onBeforeChat@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptChatSendBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
        onBeforeChat(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>);

    // vIndex: 2, symbol:
    // ?onBeforeDataDrivenActorEventSend@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptDataDrivenActorTriggerBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
        onBeforeDataDrivenActorEventSend(class Scripting::StrongTypedObjectHandle<
                                         struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerBeforeEvent>);

    // vIndex: 3, symbol:
    // ?onBeforeActivatePiston@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptPistonActionBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforeActivatePiston(class Scripting::StrongTypedObjectHandle<
                                        struct ScriptModuleMinecraft::ScriptPistonActionBeforeEvent>);

    // vIndex: 4, symbol:
    // ?onBeforeExplosion@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptExplosionStartedBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforeExplosion(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>);

    // vIndex: 5, symbol:
    // ?onBeforeItemDefinitionEventTriggered@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptItemDefinitionBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforeItemDefinitionEventTriggered(class Scripting::StrongTypedObjectHandle<
                                                      struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent>);

    // vIndex: 6, symbol:
    // ?onBeforeItemUse@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptItemUseBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforeItemUse(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>);

    // vIndex: 7, symbol:
    // ?onBeforeItemUseOn@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforeItemUseOn(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>);

    // symbol: ??1ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptWorldBeforeEvents();

    // symbol: ??0ScriptWorldBeforeEvents@ScriptModuleMinecraft@@QEAA@VWeakLifetimeScope@Scripting@@PEAVLevel@@@Z
    MCAPI ScriptWorldBeforeEvents(class Scripting::WeakLifetimeScope, class Level*);

    // symbol: ??0ScriptWorldBeforeEvents@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptWorldBeforeEvents(class ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    // symbol: ??4ScriptWorldBeforeEvents@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptWorldBeforeEvents&
    operator=(class ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    // symbol: ?registerListeners@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@QEAAXXZ
    MCAPI void registerListeners();

    // symbol: ?bind@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@@Z
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
