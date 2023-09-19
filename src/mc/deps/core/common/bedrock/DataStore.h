#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class ValueWrapper; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock {

class DataStore : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DataStore inner types declare
    // clang-format off
    struct CustomFileHandlers;
    class EditorImpl;
    class Impl;
    class Viewer;
    class ViewerImpl;
    // clang-format on

    // DataStore inner types define
    struct CustomFileHandlers {
    public:
        // prevent constructor by default
        CustomFileHandlers& operator=(CustomFileHandlers const&);
        CustomFileHandlers(CustomFileHandlers const&);
        CustomFileHandlers();

    public:
        // NOLINTBEGIN
        // symbol: ??4CustomFileHandlers@DataStore@Bedrock@@QEAAAEAU012@$$QEAU012@@Z
        MCAPI struct Bedrock::DataStore::CustomFileHandlers& operator=(struct Bedrock::DataStore::CustomFileHandlers&&);

        // symbol: ??1CustomFileHandlers@DataStore@Bedrock@@QEAA@XZ
        MCAPI ~CustomFileHandlers();

        // NOLINTEND
    };

    class EditorImpl {
    public:
        // prevent constructor by default
        EditorImpl& operator=(EditorImpl const&);
        EditorImpl(EditorImpl const&);
        EditorImpl();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();

        // vIndex: 1, symbol:
        // ?getOwningDataStore@EditorImpl@DataStore@Bedrock@@UEBA?AV?$not_null@PEBVDataStore@Bedrock@@@gsl@@XZ
        virtual gsl::not_null<class Bedrock::DataStore const*> getOwningDataStore() const;

        // vIndex: 2, symbol:
        // ?getOwningDataStore@EditorImpl@DataStore@Bedrock@@UEAA?AV?$not_null@PEAVDataStore@Bedrock@@@gsl@@XZ
        virtual gsl::not_null<class Bedrock::DataStore*> getOwningDataStore();

        // vIndex: 3, symbol:
        // ?getValueForKey@EditorImpl@DataStore@Bedrock@@UEAAPEAVNode@JSONObject@3@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
        virtual class Bedrock::JSONObject::Node* getValueForKey(std::string_view);

        // vIndex: 4, symbol:
        // ?getValueForKey@EditorImpl@DataStore@Bedrock@@UEBAPEBVNode@JSONObject@3@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
        virtual class Bedrock::JSONObject::Node const* getValueForKey(std::string_view) const;

        // vIndex: 5, symbol:
        // ?setValueForKey@EditorImpl@DataStore@Bedrock@@UEAAPEAVNode@JSONObject@3@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVValueWrapper@53@@Z
        virtual class Bedrock::JSONObject::Node*
        setValueForKey(std::string_view, class Bedrock::JSONObject::ValueWrapper const&);

        // NOLINTEND
    };

    class Impl {
    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // NOLINTBEGIN
        // symbol: ??0Impl@DataStore@Bedrock@@QEAA@PEAV12@@Z
        MCAPI explicit Impl(class Bedrock::DataStore*);

        // symbol: ?load@Impl@DataStore@Bedrock@@QEAAXXZ
        MCAPI void load();

        // NOLINTEND
    };

    class Viewer {
    public:
        // prevent constructor by default
        Viewer& operator=(Viewer const&);
        Viewer(Viewer const&);
        Viewer();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();

        // vIndex: 1, symbol:
        // ?getOwningDataStore@EditorImpl@DataStore@Bedrock@@UEBA?AV?$not_null@PEBVDataStore@Bedrock@@@gsl@@XZ
        virtual gsl::not_null<class Bedrock::DataStore const*> getOwningDataStore() const = 0;

        // vIndex: 2, symbol:
        // ?getOwningDataStore@EditorImpl@DataStore@Bedrock@@UEAA?AV?$not_null@PEAVDataStore@Bedrock@@@gsl@@XZ
        virtual gsl::not_null<class Bedrock::DataStore*> getOwningDataStore() = 0;

        // vIndex: 3, symbol:
        // ?getValueForKey@EditorImpl@DataStore@Bedrock@@UEBAPEBVNode@JSONObject@3@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
        virtual class Bedrock::JSONObject::Node const* getValueForKey(std::string_view) const = 0;

        // NOLINTEND
    };

    class ViewerImpl : public ::Bedrock::DataStore::Viewer {
    public:
        // prevent constructor by default
        ViewerImpl& operator=(ViewerImpl const&);
        ViewerImpl(ViewerImpl const&);
        ViewerImpl();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();

        // vIndex: 1, symbol:
        // ?getOwningDataStore@ViewerImpl@DataStore@Bedrock@@UEBA?AV?$not_null@PEBVDataStore@Bedrock@@@gsl@@XZ
        virtual gsl::not_null<class Bedrock::DataStore const*> getOwningDataStore() const;

        // vIndex: 2, symbol:
        // ?getOwningDataStore@ViewerImpl@DataStore@Bedrock@@UEAA?AV?$not_null@PEAVDataStore@Bedrock@@@gsl@@XZ
        virtual gsl::not_null<class Bedrock::DataStore*> getOwningDataStore();

        // vIndex: 3, symbol:
        // ?getValueForKey@ViewerImpl@DataStore@Bedrock@@UEBAPEBVNode@JSONObject@3@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
        virtual class Bedrock::JSONObject::Node const* getValueForKey(std::string_view) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DataStore& operator=(DataStore const&);
    DataStore(DataStore const&);

public:
    // NOLINTBEGIN
    // symbol: ??1DataStore@Bedrock@@UEAA@XZ
    MCVAPI ~DataStore();

    // symbol: ??0DataStore@Bedrock@@QEAA@XZ
    MCAPI DataStore();

    // symbol: ?load@DataStore@Bedrock@@QEAAXXZ
    MCAPI void load();

    // symbol: ?setCustomFileHandlers@DataStore@Bedrock@@QEAAXUCustomFileHandlers@12@@Z
    MCAPI void setCustomFileHandlers(struct Bedrock::DataStore::CustomFileHandlers);

    // symbol: ?setFilePath@DataStore@Bedrock@@QEAAXAEBVPath@Core@@@Z
    MCAPI void setFilePath(class Core::Path const&);

    // NOLINTEND
};

}; // namespace Bedrock
