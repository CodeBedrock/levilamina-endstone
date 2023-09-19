#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
namespace cereal::internal { struct Result; }
// clang-format on

namespace cereal {

struct Schema {
public:
    // prevent constructor by default
    Schema(Schema const&);

public:
    // NOLINTBEGIN
    // symbol: ??0Schema@cereal@@QEAA@AEBUReflectionCtx@1@PEBVBasicSchema@internal@1@@Z
    MCAPI Schema(struct cereal::ReflectionCtx const&, class cereal::internal::BasicSchema const*);

    // symbol: ??0Schema@cereal@@QEAA@XZ
    MCAPI Schema();

    // symbol:
    // ?getErrors@Schema@cereal@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getErrors() const;

    // symbol:
    // ?getLog@Schema@cereal@@QEBAAEBV?$vector@ULogEntry@SerializerContext@cereal@@V?$allocator@ULogEntry@SerializerContext@cereal@@@std@@@std@@XZ
    MCAPI std::vector<struct cereal::SerializerContext::LogEntry> const& getLog() const;

    // symbol: ??4Schema@cereal@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct cereal::Schema& operator=(struct cereal::Schema const&);

    // symbol:
    // ?rebind@Schema@cereal@@QEAAXAEBUReflectionCtx@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI void rebind(struct cereal::ReflectionCtx const&, std::string const&, std::string const&);

    // symbol: ?save@Schema@cereal@@QEAA?AUResult@internal@2@AEAUSchemaWriter@2@Umeta_handle@entt@@@Z
    MCAPI struct cereal::internal::Result save(struct cereal::SchemaWriter&, entt::meta_handle);

    // symbol: ?validate@Schema@cereal@@QEAA?AUResult@internal@2@$$QEAUSchemaReader@2@@Z
    MCAPI struct cereal::internal::Result validate(struct cereal::SchemaReader&&);

    // symbol: ?validate@Schema@cereal@@QEAA?AUResult@internal@2@AEAUSchemaReader@2@@Z
    MCAPI struct cereal::internal::Result validate(struct cereal::SchemaReader&);

    // symbol: ??1Schema@cereal@@QEAA@XZ
    MCAPI ~Schema();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?loadImpl@Schema@cereal@@AEAA?AUResult@internal@2@AEAUSchemaReader@2@Vmeta_any@entt@@AEBV67@@Z
    MCAPI struct cereal::internal::Result loadImpl(struct cereal::SchemaReader&, entt::meta_any, entt::meta_any const&);

    // NOLINTEND
};

}; // namespace cereal
