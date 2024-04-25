#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Color {
public:
    // prevent constructor by default
    Color& operator=(Color const&);
    Color(Color const&);
    Color();

public:
    // NOLINTBEGIN
    // symbol: ??0Color@mce@@QEAA@MMMM@Z
    MCAPI Color(float, float, float, float);

    // symbol: ??8Color@mce@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class mce::Color const& c) const;

    // symbol: ?toABGR@Color@mce@@QEBAHXZ
    MCAPI int toABGR() const;

    // symbol: ?toARGB@Color@mce@@QEBAHXZ
    MCAPI int toARGB() const;

    // symbol: ?toHexString@Color@mce@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toHexString() const;

    // symbol: ?fromHexString@Color@mce@@SA?AV12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class mce::Color fromHexString(std::string const&);

    // symbol: ?BLACK@Color@mce@@2V12@B
    MCAPI static class mce::Color const BLACK;

    // symbol: ?BLUE@Color@mce@@2V12@B
    MCAPI static class mce::Color const BLUE;

    // symbol: ?CYAN@Color@mce@@2V12@B
    MCAPI static class mce::Color const CYAN;

    // symbol: ?GREEN@Color@mce@@2V12@B
    MCAPI static class mce::Color const GREEN;

    // symbol: ?GREY@Color@mce@@2V12@B
    MCAPI static class mce::Color const GREY;

    // symbol: ?MINECOIN_GOLD@Color@mce@@2V12@B
    MCAPI static class mce::Color const MINECOIN_GOLD;

    // symbol: ?NIL@Color@mce@@2V12@B
    MCAPI static class mce::Color const NIL;

    // symbol: ?ORANGE@Color@mce@@2V12@B
    MCAPI static class mce::Color const ORANGE;

    // symbol: ?PINK@Color@mce@@2V12@B
    MCAPI static class mce::Color const PINK;

    // symbol: ?PURPLE@Color@mce@@2V12@B
    MCAPI static class mce::Color const PURPLE;

    // symbol: ?REBECCA_PURPLE@Color@mce@@2V12@B
    MCAPI static class mce::Color const REBECCA_PURPLE;

    // symbol: ?RED@Color@mce@@2V12@B
    MCAPI static class mce::Color const RED;

    // symbol: ?SHADE_DOWN@Color@mce@@2V12@B
    MCAPI static class mce::Color const SHADE_DOWN;

    // symbol: ?SHADE_NORTH_SOUTH@Color@mce@@2V12@B
    MCAPI static class mce::Color const SHADE_NORTH_SOUTH;

    // symbol: ?SHADE_UP@Color@mce@@2V12@B
    MCAPI static class mce::Color const SHADE_UP;

    // symbol: ?SHADE_WEST_EAST@Color@mce@@2V12@B
    MCAPI static class mce::Color const SHADE_WEST_EAST;

    // symbol: ?WHITE@Color@mce@@2V12@B
    MCAPI static class mce::Color const WHITE;

    // symbol: ?YELLOW@Color@mce@@2V12@B
    MCAPI static class mce::Color const YELLOW;

    // NOLINTEND
};

}; // namespace mce
