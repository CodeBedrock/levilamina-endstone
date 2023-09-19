#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/DirectoryIterationFlags.h"
#include "mc/deps/core/FileBufferingMode.h"
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class FlatFileSearchResult; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
// clang-format on

namespace Core {

class FlatFileSystemImpl {
public:
    // prevent constructor by default
    FlatFileSystemImpl& operator=(FlatFileSystemImpl const&);
    FlatFileSystemImpl(FlatFileSystemImpl const&);
    FlatFileSystemImpl();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0FlatFileSystemImpl@Core@@QEAA@AEAVFileSystemImpl@1@V?$shared_ptr@VFlatFileManifestTracker@Core@@@std@@@Z
    MCAPI FlatFileSystemImpl(class Core::FileSystemImpl&, std::shared_ptr<class Core::FlatFileManifestTracker>);

    // symbol:
    // ?copyFlatFile@FlatFileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@0AEBV?$vector@UExcludedPath@Core@@V?$allocator@UExcludedPath@Core@@@std@@@std@@1@Z
    MCAPI class Core::Result
    copyFlatFile(class Core::Path const&, class Core::Path const&, std::vector<struct Core::ExcludedPath> const&, std::vector<struct Core::ExcludedPath> const&);

    // symbol: ?createFlatFile@FlatFileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@0@Z
    MCAPI class Core::Result createFlatFile(class Core::Path const&, class Core::Path const&);

    // symbol: ?deleteFileOrDirectory@FlatFileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@0_N1@Z
    MCAPI class Core::Result deleteFileOrDirectory(class Core::Path const&, class Core::Path const&, bool, bool);

    // symbol: ?directoryExists@FlatFileSystemImpl@Core@@QEAA_NAEBVPath@2@0@Z
    MCAPI bool directoryExists(class Core::Path const&, class Core::Path const&);

    // symbol: ?fileExists@FlatFileSystemImpl@Core@@QEAA_NAEBVPath@2@0@Z
    MCAPI bool fileExists(class Core::Path const&, class Core::Path const&);

    // symbol: ?fileOrDirectoryExists@FlatFileSystemImpl@Core@@QEAA_NAEBVPath@2@0@Z
    MCAPI bool fileOrDirectoryExists(class Core::Path const&, class Core::Path const&);

    // symbol: ?getFileSize@FlatFileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@0PEA_K@Z
    MCAPI class Core::Result getFileSize(class Core::Path const&, class Core::Path const&, uint64*);

    // symbol: ?isDirectoryPathAFlatFile@FlatFileSystemImpl@Core@@QEAA_NAEBVPath@2@@Z
    MCAPI bool isDirectoryPathAFlatFile(class Core::Path const&);

    // symbol:
    // ?iterateOverDirectory@FlatFileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@0W4DirectoryIterationFlags@2@V?$function@$$A6A?AVResult@Core@@AEBUDirectoryIterationItem@2@@Z@std@@@Z
    MCAPI class Core::Result
    iterateOverDirectory(class Core::Path const&, class Core::Path const&, ::Core::DirectoryIterationFlags, std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>);

    // symbol:
    // ?openFlatFile@FlatFileSystemImpl@Core@@QEAA?AVResult@2@AEAV?$unique_ptr@VFileImpl@Core@@U?$default_delete@VFileImpl@Core@@@std@@@std@@AEBVPath@2@1VFileOpenMode@2@W4FileBufferingMode@2@@Z
    MCAPI class Core::Result openFlatFile(
        std::unique_ptr<class Core::FileImpl>&,
        class Core::Path const&,
        class Core::Path const&,
        class Core::FileOpenMode,
        ::Core::FileBufferingMode
    );

    // symbol:
    // ?shouldAccessFlatFile@FlatFileSystemImpl@Core@@QEAA_NAEBVPath@2@AEAV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@_N@Z
    MCAPI bool shouldAccessFlatFile(class Core::Path const&, class Core::PathBuffer<std::string>&, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findFileOrDirectoryEntry@FlatFileSystemImpl@Core@@AEAA?AVFlatFileSearchResult@2@AEBVPath@2@0_N@Z
    MCAPI class Core::FlatFileSearchResult
    _findFileOrDirectoryEntry(class Core::Path const&, class Core::Path const&, bool);

    // symbol: ?_getSeekPositionAndSize@FlatFileSystemImpl@Core@@AEAA?AVResult@2@AEBVPath@2@0AEA_K1@Z
    MCAPI class Core::Result
    _getSeekPositionAndSize(class Core::Path const&, class Core::Path const&, uint64&, uint64&);

    // NOLINTEND
};

}; // namespace Core
