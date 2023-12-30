#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CircuitSystem {
public:
    // prevent constructor by default
    CircuitSystem& operator=(CircuitSystem const&);
    CircuitSystem(CircuitSystem const&);

public:
    // NOLINTBEGIN
    // symbol: ??0CircuitSystem@@QEAA@XZ
    MCAPI CircuitSystem();

    // symbol: ?evaluate@CircuitSystem@@QEAAXPEAVBlockSource@@@Z
    MCAPI void evaluate(class BlockSource* region);

    // symbol: ?getStrength@CircuitSystem@@QEAAHAEBVBlockPos@@@Z
    MCAPI int getStrength(class BlockPos const& pos);

    // symbol: ?invalidatePos@CircuitSystem@@QEAAXAEBVBlockPos@@@Z
    MCAPI void invalidatePos(class BlockPos const& pos);

    // symbol: ?isAvailableAt@CircuitSystem@@QEAA_NAEBVBlockPos@@@Z
    MCAPI bool isAvailableAt(class BlockPos const& pos);

    // symbol: ?isConnectionAllowed@CircuitSystem@@QEAA_NAEAVBaseCircuitComponent@@AEBVBlockPos@@E_N@Z
    MCAPI bool isConnectionAllowed(class BaseCircuitComponent&, class BlockPos const&, uchar, bool);

    // symbol: ?preSetupPoweredBlocks@CircuitSystem@@QEAAXAEBVChunkPos@@@Z
    MCAPI void preSetupPoweredBlocks(class ChunkPos const& chunkPos);

    // symbol: ?removeComponents@CircuitSystem@@QEAAXAEBVBlockPos@@@Z
    MCAPI void removeComponents(class BlockPos const& pos);

    // symbol: ?setStrength@CircuitSystem@@QEAAXAEBVBlockPos@@H@Z
    MCAPI void setStrength(class BlockPos const& pos, int strength);

    // symbol: ?updateBlocks@CircuitSystem@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void updateBlocks(class BlockSource& region, class BlockPos const& chunkPos);

    // symbol: ?updateDependencies@CircuitSystem@@QEAAXPEAVBlockSource@@@Z
    MCAPI void updateDependencies(class BlockSource* region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?createComponent@CircuitSystem@@AEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@EV?$unique_ptr@VBaseCircuitComponent@@U?$default_delete@VBaseCircuitComponent@@@std@@@std@@@Z
    MCAPI class BaseCircuitComponent* createComponent(
        class BlockPos const&                       pos,
        uchar                                       direction,
        std::unique_ptr<class BaseCircuitComponent> newComponent
    );

    // symbol: ?evaluateComponents@CircuitSystem@@AEAAX_N@Z
    MCAPI void evaluateComponents(bool bOnlyProducers);

    // symbol:
    // ?updateIndividualBlock@CircuitSystem@@AEAAXV?$not_null@PEAVBaseCircuitComponent@@@gsl@@AEBVBlockPos@@1AEAVBlockSource@@@Z
    MCAPI void updateIndividualBlock(
        gsl::not_null<class BaseCircuitComponent*> component,
        class BlockPos const&                      chunkPos,
        class BlockPos const&                      pos,
        class BlockSource&                         region
    );

    // NOLINTEND
};
