#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Package.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/TemplateAppearance.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/TemplateBindingOverride.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/TemplateComponentBackendDataOverrideInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/TemplateComponentResolveSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/TemplateInclude.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>

namespace RED4ext
{
struct CResource;
namespace ent
{
struct VisualTagsSchema;
}

namespace ent
{
struct EntityTemplate : res::StreamedResource
{
    static constexpr const char* NAME = "entEntityTemplate";
    static constexpr const char* ALIAS = NAME;

    DynArray<ent::TemplateInclude> includes;                                      // 40
    DynArray<ent::TemplateAppearance> appearances;                                // 50
    CName defaultAppearance;                                                      // 60
    DynArray<ent::TemplateComponentResolveSettings> componentResolveSettings;     // 68
    DynArray<ent::TemplateBindingOverride> bindingOverrides;                      // 78
    DynArray<ent::TemplateComponentBackendDataOverrideInfo> backendDataOverrides; // 88
    Handle<ent::VisualTagsSchema> visualTagsSchema;                               // 98
    ObjectPackageHeader localDataHeader;                                          // A8
    DataBuffer localData;                                                         // 118
    ObjectPackageHeader includeInstanceBufferHeader;                              // 140
    DataBuffer includeInstanceBuffer;                                             // 1B0
    ObjectPackageHeader compiledDataHeader;                                       // 1D8
    DataBuffer compiledData;                                                      // 248
    DynArray<RaRef<CResource>> resolvedDependencies;                              // 270
    DynArray<Ref<CResource>> inplaceResources;                                    // 280
    uint8_t unk290[0x2A0 - 0x290];                                                // 290
    uint16_t compiledEntityLODFlags;                                              // 2A0
    uint8_t unk2A2[0x2B0 - 0x2A2];                                                // 2A2
};
RED4EXT_ASSERT_SIZE(EntityTemplate, 0x2B0);
} // namespace ent
} // namespace RED4ext
