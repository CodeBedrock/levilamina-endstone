#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WebviewObserver {
public:
    // prevent constructor by default
    WebviewObserver& operator=(WebviewObserver const&);
    WebviewObserver(WebviewObserver const&);
    WebviewObserver();

public:
    // NOLINTBEGIN
    // symbol: ?onDownloadBegin@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
    MCVAPI void onDownloadBegin(struct WebviewDownloadInfo const&);

    // symbol: ?onDownloadCanceled@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
    MCVAPI void onDownloadCanceled(struct WebviewDownloadInfo const&);

    // symbol: ?onDownloadComplete@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
    MCVAPI void onDownloadComplete(struct WebviewDownloadInfo const&);

    // symbol: ?onDownloadUpdate@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
    MCVAPI void onDownloadUpdate(struct WebviewDownloadInfo const&);

    // symbol: ?onError@WebviewObserver@@UEAAXAEBUWebviewError@@@Z
    MCVAPI void onError(struct WebviewError const&);

    // symbol: ?onLoadingBegin@WebviewObserver@@UEAAXXZ
    MCVAPI void onLoadingBegin();

    // symbol: ?onLoadingEnd@WebviewObserver@@UEAAXXZ
    MCVAPI void onLoadingEnd();

    // symbol:
    // ?onMessageRecieved@WebviewObserver@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onMessageRecieved(std::string const&);

    // symbol: ?onWebviewChanged@WebviewObserver@@UEAAXXZ
    MCVAPI void onWebviewChanged();

    // symbol: ??1WebviewObserver@@UEAA@XZ
    MCVAPI ~WebviewObserver();

    // NOLINTEND
};
