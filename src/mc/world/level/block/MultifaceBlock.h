#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MultifaceBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    MultifaceBlock& operator=(MultifaceBlock const&);
    MultifaceBlock(MultifaceBlock const&);
    MultifaceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 5, symbol: ?clip@MultifaceBlock@@UEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z
    virtual class HitResult
    clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool) const;

    // vIndex: 8, symbol:
    // ?getAABB@MultifaceBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;

    // vIndex: 11, symbol:
    // ?getVisualShapeInWorld@MultifaceBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: ?isWaterBlocking@MultifaceBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 46, symbol: __unk_vfn_46
    virtual void __unk_vfn_46();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 49, symbol: __unk_vfn_49
    virtual void __unk_vfn_49();

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 59, symbol: ?sanitizeFillBlock@MultifaceBlock@@UEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const& sanitizeFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 84, symbol: __unk_vfn_84
    virtual void __unk_vfn_84();

    // vIndex: 93, symbol: ?mayPlace@MultifaceBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, uchar) const;

    // vIndex: 101, symbol: ?neighborChanged@MultifaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 108, symbol: ?getPlacementBlock@MultifaceBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: __unk_vfn_125
    virtual void __unk_vfn_125();

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // vIndex: 131, symbol: __unk_vfn_131
    virtual void __unk_vfn_131();

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@MultifaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 175, symbol: ?canSurvive@MultifaceBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 192, symbol: ?getMultifaceBlock@SculkVeinBlock@@UEBAAEBVBlock@@XZ
    virtual class Block const& getMultifaceBlock() const = 0;

    // vIndex: 193, symbol: ?getMultifaceSpreader@SculkVeinBlock@@UEBAAEBVMultifaceSpreader@@XZ
    virtual class MultifaceSpreader const& getMultifaceSpreader() const = 0;

    // symbol: ?isMultifaceBlock@MultifaceBlock@@UEBA_NXZ
    MCVAPI bool isMultifaceBlock() const;

    // symbol:
    // ??0MultifaceBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI MultifaceBlock(std::string const&, int, class Material const&);

    // symbol: ?removeFace@MultifaceBlock@@QEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@E_N@Z
    MCAPI void
    removeFace(class IBlockWorldGenAPI&, class BlockSource*, class Block const&, class BlockPos const&, uchar, bool)
        const;

    // symbol: ?convertOldMultifaceToNewMultifaceValue@MultifaceBlock@@SAHH@Z
    MCAPI static int convertOldMultifaceToNewMultifaceValue(int);

    // symbol: ?getBlockForPlacement@MultifaceBlock@@SAAEBVBlock@@AEBV2@0AEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI static class Block const&
    getBlockForPlacement(class Block const&, class Block const&, class BlockSource&, class BlockPos const&, uchar);

    // symbol:
    // ?getBlockForPlacementWorldGen@MultifaceBlock@@SAAEBVBlock@@AEBV2@0AEAVIBlockWorldGenAPI@@AEBVBlockPos@@E@Z
    MCAPI static class Block const& getBlockForPlacementWorldGen(
        class Block const&,
        class Block const&,
        class IBlockWorldGenAPI&,
        class BlockPos const&,
        uchar
    );

    // symbol: ?getMultifaceValueFromFace@MultifaceBlock@@SAHE@Z
    MCAPI static int getMultifaceValueFromFace(uchar);

    // symbol: ?hasFace@MultifaceBlock@@SA_NAEBVBlock@@E@Z
    MCAPI static bool hasFace(class Block const&, uchar);

    // symbol: ?MULTIFACE_ALL@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_ALL;

    // symbol: ?MULTIFACE_DOWN@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_DOWN;

    // symbol: ?MULTIFACE_EAST@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_EAST;

    // symbol: ?MULTIFACE_NORTH@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_NORTH;

    // symbol: ?MULTIFACE_SIDES@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_SIDES;

    // symbol: ?MULTIFACE_SOUTH@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_SOUTH;

    // symbol: ?MULTIFACE_UP@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_UP;

    // symbol: ?MULTIFACE_WEST@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_WEST;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canSpread@MultifaceBlock@@IEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@E@Z
    MCAPI bool _canSpread(class IBlockWorldGenAPI&, class Block const&, class BlockPos const&, uchar) const;

    // symbol: ?_getNumSides@MultifaceBlock@@IEBAHAEBVBlock@@@Z
    MCAPI int _getNumSides(class Block const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_removeBlock@MultifaceBlock@@AEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI void _removeBlock(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&, bool) const;

    // NOLINTEND
};
