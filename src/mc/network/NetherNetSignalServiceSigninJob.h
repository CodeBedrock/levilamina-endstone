#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class NetherNetSignalServiceSigninJob {
public:
    // NetherNetSignalServiceSigninJob inner types declare
    // clang-format off
    struct Token;
    struct Url;
    class ConfigListener;
    // clang-format on

    // NetherNetSignalServiceSigninJob inner types define
    struct Token {
    public:
        // prevent constructor by default
        Token& operator=(Token const&);
        Token(Token const&);
        Token();

    public:
        // NOLINTBEGIN
        // symbol: ??1Token@NetherNetSignalServiceSigninJob@@QEAA@XZ
        MCAPI ~Token();

        // NOLINTEND
    };

    struct Url {
    public:
        // prevent constructor by default
        Url& operator=(Url const&);
        Url(Url const&);
        Url();

    public:
        // NOLINTBEGIN
        // symbol: ??1Url@NetherNetSignalServiceSigninJob@@QEAA@XZ
        MCAPI ~Url();

        // NOLINTEND
    };

    class ConfigListener {
    public:
        // prevent constructor by default
        ConfigListener& operator=(ConfigListener const&);
        ConfigListener(ConfigListener const&);
        ConfigListener();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?getConfigAsync@ConfigListener@NetherNetSignalServiceSigninJob@@QEAA?AV?$shared_ptr@V?$IAsyncResult@V?$tuple@UUrl@NetherNetSignalServiceSigninJob@@UToken@2@@std@@@Threading@Bedrock@@@std@@XZ
        MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<
            std::tuple<struct NetherNetSignalServiceSigninJob::Url, struct NetherNetSignalServiceSigninJob::Token>>>
              getConfigAsync();

        // symbol: ??1ConfigListener@NetherNetSignalServiceSigninJob@@QEAA@XZ
        MCAPI ~ConfigListener();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NetherNetSignalServiceSigninJob& operator=(NetherNetSignalServiceSigninJob const&);
    NetherNetSignalServiceSigninJob(NetherNetSignalServiceSigninJob const&);
    NetherNetSignalServiceSigninJob();

public:
    // NOLINTBEGIN
    // symbol:
    // ?signin@NetherNetSignalServiceSigninJob@@UEAAX_NV?$optional@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@std@@@Z
    MCVAPI void signin(bool, std::optional<std::chrono::seconds>);

    // symbol: ??1NetherNetSignalServiceSigninJob@@UEAA@XZ
    MCVAPI ~NetherNetSignalServiceSigninJob();

    // symbol:
    // ??0NetherNetSignalServiceSigninJob@@QEAA@$$QEAV?$not_null@V?$NonOwnerPointer@UNetherNetConnector@@@Bedrock@@@gsl@@$$QEAV?$function@$$A6AX_N@Z@std@@$$QEAV?$function@$$A6AXXZ@4@V?$not_null@V?$NonOwnerPointer@VDisconnectionRequestHandler@@@Bedrock@@@2@V?$not_null@V?$NonOwnerPointer@VServicesManager@@@Bedrock@@@2@V?$not_null@V?$NonOwnerPointer@VIMinecraftEventing@@@Bedrock@@@2@_N@Z
    MCAPI NetherNetSignalServiceSigninJob(
        gsl::not_null<class Bedrock::NonOwnerPointer<struct NetherNetConnector>>&&,
        std::function<void(bool)>&&,
        std::function<void(void)>&&,
        gsl::not_null<class Bedrock::NonOwnerPointer<class DisconnectionRequestHandler>>,
        gsl::not_null<class Bedrock::NonOwnerPointer<class ServicesManager>>,
        gsl::not_null<class Bedrock::NonOwnerPointer<class IMinecraftEventing>>,
        bool
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_executeOnMainThread@NetherNetSignalServiceSigninJob@@AEAAX$$QEAV?$function@$$A6AXXZ@std@@@Z
    MCAPI void _executeOnMainThread(std::function<void(void)>&&);

    // symbol: ?_signin@NetherNetSignalServiceSigninJob@@AEAAXAEBUUrl@1@AEBUToken@1@_N@Z
    MCAPI void _signin(
        struct NetherNetSignalServiceSigninJob::Url const&,
        struct NetherNetSignalServiceSigninJob::Token const&,
        bool
    );

    // NOLINTEND
};
