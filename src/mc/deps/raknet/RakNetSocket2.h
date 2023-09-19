#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakNetSocket2 {
public:
    // prevent constructor by default
    RakNetSocket2& operator=(RakNetSocket2 const&);
    RakNetSocket2(RakNetSocket2 const&);
    RakNetSocket2();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?SetMulticastInterface@RakNetSocket2@RakNet@@UEAAXH@Z
    virtual void SetMulticastInterface(int);

    // NOLINTEND
};

}; // namespace RakNet
