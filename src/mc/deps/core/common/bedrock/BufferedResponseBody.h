#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IResponseBody.h"
#include "mc/deps/core/common/bedrock/ResponseBodyType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http::Internal { class IResponseBody; }
// clang-format on

namespace Bedrock::Http {

class BufferedResponseBody : public ::Bedrock::Http::Internal::IResponseBody {
public:
    // prevent constructor by default
    BufferedResponseBody& operator=(BufferedResponseBody const&);
    BufferedResponseBody(BufferedResponseBody const&);
    BufferedResponseBody();

public:
    // NOLINTBEGIN
    // symbol: ?cancel@BufferedResponseBody@Http@Bedrock@@MEAAXXZ
    MCVAPI void cancel();

    // symbol: ?complete@BufferedResponseBody@Http@Bedrock@@MEAAXXZ
    MCVAPI void complete();

    // symbol: ?getLoggableData@BufferedResponseBody@Http@Bedrock@@MEBA?AV?$span@$$CBE$0?0@gsl@@XZ
    MCVAPI gsl::span<uchar const> getLoggableData() const;

    // symbol:
    // ?getLoggableDestination@BufferedResponseBody@Http@Bedrock@@MEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string const& getLoggableDestination() const;

    // symbol: ?getType@BufferedResponseBody@Http@Bedrock@@MEBA?AW4ResponseBodyType@23@XZ
    MCVAPI ::Bedrock::Http::ResponseBodyType getType() const;

    // symbol: ?start@BufferedResponseBody@Http@Bedrock@@MEAA?AVerror_code@std@@V?$optional@_K@5@@Z
    MCVAPI std::error_code start(std::optional<uint64>);

    // symbol: ?write@BufferedResponseBody@Http@Bedrock@@MEAA?AVerror_code@std@@V?$span@$$CBE$0?0@gsl@@@Z
    MCVAPI std::error_code write(gsl::span<uchar const>);

    // symbol: ?get@BufferedResponseBody@Http@Bedrock@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ
    MCAPI gsl::span<uchar const> get() const;

    // symbol: ?create@BufferedResponseBody@Http@Bedrock@@SA?AV?$shared_ptr@VBufferedResponseBody@Http@Bedrock@@@std@@XZ
    MCAPI static std::shared_ptr<class Bedrock::Http::BufferedResponseBody> create();

    // NOLINTEND
};

}; // namespace Bedrock::Http
