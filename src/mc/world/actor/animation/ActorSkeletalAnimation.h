#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/util/molang/MolangVersion.h"

class ActorSkeletalAnimation {
public:
    // prevent constructor by default
    ActorSkeletalAnimation& operator=(ActorSkeletalAnimation const&);
    ActorSkeletalAnimation(ActorSkeletalAnimation const&);
    ActorSkeletalAnimation();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorSkeletalAnimation@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI ActorSkeletalAnimation(std::string const&, std::string const&);

    // symbol:
    // ?addActorEvent@ActorSkeletalAnimation@@QEAAAEAVActorAnimationEvent@@MAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CurrentCmdVersion@@W4MolangVersion@@@Z
    MCAPI class ActorAnimationEvent& addActorEvent(float, std::string const&, ::CurrentCmdVersion, ::MolangVersion);

    // symbol:
    // ?addBoneAnimation@ActorSkeletalAnimation@@QEAAAEAVBoneAnimation@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class BoneAnimation& addBoneAnimation(std::string const&);

    // symbol: ?addParticleEffectEvent@ActorSkeletalAnimation@@QEAAAEAVActorParticleEffectEvent@@M@Z
    MCAPI class ActorParticleEffectEvent& addParticleEffectEvent(float);

    // symbol: ?addSoundEffectEvent@ActorSkeletalAnimation@@QEAAAEAVActorSoundEffectEvent@@M@Z
    MCAPI class ActorSoundEffectEvent& addSoundEffectEvent(float);

    // symbol: ?removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion@ActorSkeletalAnimation@@QEAAXXZ
    MCAPI void removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion();

    // NOLINTEND
};
