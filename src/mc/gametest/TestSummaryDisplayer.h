#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
namespace gametest { class MultipleTestTracker; }
// clang-format on

class TestSummaryDisplayer : public ::gametest::IGameTestListener {
public:
    // prevent constructor by default
    TestSummaryDisplayer& operator=(TestSummaryDisplayer const&);
    TestSummaryDisplayer(TestSummaryDisplayer const&);
    TestSummaryDisplayer();

public:
    // NOLINTBEGIN
    // symbol: ?onTestFailed@TestSummaryDisplayer@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
    MCVAPI void onTestFailed(class gametest::BaseGameTestInstance&);

    // symbol: ?onTestPassed@TestSummaryDisplayer@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
    MCVAPI void onTestPassed(class gametest::BaseGameTestInstance&);

    // symbol: ??0TestSummaryDisplayer@@QEAA@AEAVLevel@@AEAVMultipleTestTracker@gametest@@@Z
    MCAPI TestSummaryDisplayer(class Level&, class gametest::MultipleTestTracker&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_say@TestSummaryDisplayer@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI void _say(std::string const&, std::string const&) const;

    // symbol: ?_showTestSummaryIfAllDone@TestSummaryDisplayer@@AEBAXXZ
    MCAPI void _showTestSummaryIfAllDone() const;

    // NOLINTEND
};
