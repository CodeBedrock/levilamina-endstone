#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundBlockVolumeItem {
public:
    // prevent constructor by default
    CompoundBlockVolumeItem& operator=(CompoundBlockVolumeItem const&);
    CompoundBlockVolumeItem(CompoundBlockVolumeItem const&);
    CompoundBlockVolumeItem();

public:
    // NOLINTBEGIN
    // symbol: ??9CompoundBlockVolumeItem@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class CompoundBlockVolumeItem const&) const;

    // symbol: ??8CompoundBlockVolumeItem@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class CompoundBlockVolumeItem const&) const;

    // symbol: ?bindType@CompoundBlockVolumeItem@@SAXXZ
    MCAPI static void bindType();

    // NOLINTEND
};
