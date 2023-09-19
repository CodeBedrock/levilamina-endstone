#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/HorseFlags.h"
#include "mc/enums/HorsePostTravelType.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/components/ItemUseMethod.h"

class Horse : public ::Animal {
public:
    // prevent constructor by default
    Horse& operator=(Horse const&);
    Horse(Horse const&);
    Horse();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ?reloadHardcoded@Horse@@EEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 32, symbol: ?getInterpolatedRidingOffset@Horse@@UEBA?AVVec3@@MH@Z
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 69, symbol: ?getShadowRadius@Horse@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 79, symbol: ?isImmobile@Horse@@MEBA_NXZ
    virtual bool isImmobile() const;

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 109, symbol: ?onFailedTame@Horse@@UEAAXXZ
    virtual void onFailedTame();

    // vIndex: 113, symbol: ?setStanding@Horse@@UEAAX_N@Z
    virtual void setStanding(bool);

    // vIndex: 126, symbol: ?feed@Horse@@UEAAXH@Z
    virtual void feed(int);

    // vIndex: 127, symbol: ?handleEntityEvent@Horse@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 157, symbol: ?canFreeze@Horse@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 166, symbol: ?getControllingPlayer@Horse@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 168, symbol: ?causeFallDamage@Horse@@MEAAXMMVActorDamageSource@@@Z
    virtual void causeFallDamage(float, float, class ActorDamageSource);

    // vIndex: 169, symbol: ?handleFallDistanceOnServer@Horse@@MEAAXMM_N@Z
    virtual void handleFallDistanceOnServer(float, float, bool);

    // vIndex: 173, symbol: ?onSynchedDataUpdate@Horse@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 199, symbol: ?openContainerComponent@Horse@@UEAAXAEAVPlayer@@@Z
    virtual void openContainerComponent(class Player&);

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 224, symbol: ?die@Horse@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 237, symbol: ?updateEntitySpecificMolangVariables@Horse@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol: ?_hurt@Horse@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 245, symbol: ?_playStepSound@Horse@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const&, class Block const&);

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 276, symbol: __unk_vfn_276
    virtual void __unk_vfn_276();

    // vIndex: 280, symbol: __unk_vfn_280
    virtual void __unk_vfn_280();

    // vIndex: 285, symbol: ?getArmorValue@Horse@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 323, symbol: __unk_vfn_323
    virtual void __unk_vfn_323();

    // vIndex: 325, symbol: ?setType@Horse@@UEAAXH@Z
    virtual void setType(int);

    // vIndex: 326, symbol: ?getType@Horse@@UEBAHXZ
    virtual int getType() const;

    // vIndex: 327, symbol: ?setHorseEating@Horse@@UEAAX_N@Z
    virtual void setHorseEating(bool);

    // vIndex: 328, symbol: ?getStandAnim@Horse@@UEBAMM@Z
    virtual float getStandAnim(float) const;

    // vIndex: 329, symbol: ?isAdult@Horse@@UEBA_NXZ
    virtual bool isAdult() const;

    // vIndex: 330, symbol: ?isHorseEating@Horse@@UEBA_NXZ
    virtual bool isHorseEating() const;

    // vIndex: 331, symbol: ?isMouthOpen@Horse@@UEBA_NXZ
    virtual bool isMouthOpen() const;

    // vIndex: 332, symbol: ?makeMad@Horse@@UEAAXXZ
    virtual void makeMad();

    // vIndex: 333, symbol: ?tameToPlayer@Horse@@UEAA_NAEAVPlayer@@_N@Z
    virtual bool tameToPlayer(class Player&, bool);

    // symbol: ??0Horse@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Horse(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getPostTravelType@Horse@@QEAA?AW4HorsePostTravelType@@PEAVActor@@@Z
    MCAPI ::HorsePostTravelType getPostTravelType(class Actor*);

    // symbol: ?postAiStep@Horse@@QEAAXXZ
    MCAPI void postAiStep();

    // symbol: ?postNormalTick@Horse@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?postTravel@Horse@@QEAAXPEAVActor@@_NW4HorsePostTravelType@@@Z
    MCAPI void postTravel(class Actor*, bool, ::HorsePostTravelType);

    // symbol:
    // ?getInterpolatedRidingOffset@Horse@@SA?AVVec3@@AEBURenderRotationComponent@@AEBUStandAnimationComponent@@M@Z
    MCAPI static class Vec3
    getInterpolatedRidingOffset(struct RenderRotationComponent const&, struct StandAnimationComponent const&, float);

    // symbol: ?getInterpolatedRidingOffset@Horse@@SA?AVVec3@@AEBVVec2@@MMM@Z
    MCAPI static class Vec3 getInterpolatedRidingOffset(class Vec2 const&, float, float, float);

    // symbol:
    // ?getNewPassengerPos@Horse@@SA?AVVec3@@AEBURenderPositionComponent@@AEBURenderRotationComponent@@AEBUStandAnimationComponent@@MM@Z
    MCAPI static class Vec3 getNewPassengerPos(
        struct RenderPositionComponent const&,
        struct RenderRotationComponent const&,
        struct StandAnimationComponent const&,
        float,
        float
    );

    // symbol: ?setHorseFlag@Horse@@SAXVSynchedActorDataWriter@@W4HorseFlags@@_N@Z
    MCAPI static void setHorseFlag(class SynchedActorDataWriter, ::HorseFlags, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setHorseFlag@Horse@@AEAAXW4HorseFlags@@_N@Z
    MCAPI void _setHorseFlag(::HorseFlags, bool);

    // symbol: ?_setHorseType@Horse@@AEAA_NAEAW4ActorType@@@Z
    MCAPI bool _setHorseType(::ActorType&);

    // NOLINTEND
};
