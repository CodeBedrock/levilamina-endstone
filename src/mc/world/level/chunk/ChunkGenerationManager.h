#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SubClientId.h"

class ChunkGenerationManager {
public:
    // prevent constructor by default
    ChunkGenerationManager& operator=(ChunkGenerationManager const&);
    ChunkGenerationManager(ChunkGenerationManager const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ChunkGenerationManager@@QEAA@XZ
    MCAPI ChunkGenerationManager();

    // symbol:
    // ?addServerChunksToPacket@ChunkGenerationManager@@QEAAXAEBVNetworkIdentifier@@W4SubClientId@@AEAVNetworkChunkPublisherUpdatePacket@@@Z
    MCAPI void
    addServerChunksToPacket(class NetworkIdentifier const&, ::SubClientId, class NetworkChunkPublisherUpdatePacket&);

    // symbol: ?clearAllGenerationRequests@ChunkGenerationManager@@QEAAXAEBVNetworkIdentifier@@W4SubClientId@@@Z
    MCAPI void clearAllGenerationRequests(class NetworkIdentifier const&, ::SubClientId);

    // symbol: ?hasPendingGenerationRequests@ChunkGenerationManager@@QEBA_NAEBVNetworkIdentifier@@W4SubClientId@@@Z
    MCAPI bool hasPendingGenerationRequests(class NetworkIdentifier const&, ::SubClientId) const;

    // symbol:
    // ?queueChunkGenerationRequest@ChunkGenerationManager@@QEAAXAEBVNetworkIdentifier@@W4SubClientId@@AEBVChunkPos@@@Z
    MCAPI void queueChunkGenerationRequest(class NetworkIdentifier const&, ::SubClientId, class ChunkPos const&);

    // symbol: ??1ChunkGenerationManager@@QEAA@XZ
    MCAPI ~ChunkGenerationManager();

    // NOLINTEND
};
