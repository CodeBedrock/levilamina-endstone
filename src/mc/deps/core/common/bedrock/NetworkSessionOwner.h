#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/TransportLayer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class NetworkSessionOwner : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    NetworkSessionOwner& operator=(NetworkSessionOwner const&);
    NetworkSessionOwner(NetworkSessionOwner const&);

public:
    // NOLINTBEGIN
    // symbol: ??0NetworkSessionOwner@@QEAA@XZ
    MCAPI NetworkSessionOwner();

    // symbol: ?getTransportLayer@NetworkSessionOwner@@QEBA?AW4TransportLayer@@XZ
    MCAPI ::TransportLayer getTransportLayer() const;

    // NOLINTEND
};
