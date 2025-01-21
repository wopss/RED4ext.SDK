#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/RenderResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/MorphTargetMeshEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>

#include <cstdint>

namespace RED4ext
{
struct CMesh;
struct IRenderResourceBlob;
struct ITexture;

struct __declspec(align(0x10)) MorphTargetMesh : res::StreamedResource
{
    static constexpr const char* NAME = "MorphTargetMesh";
    static constexpr const char* ALIAS = NAME;

    Box boundingBox;                        // 40
    Ref<CMesh> baseMesh;                    // 60
    CName baseTextureParamName;             // 78
    Ref<ITexture> baseTexture;              // 80
    CName baseMeshAppearance;               // 98
    Handle<IRenderResourceBlob> blob;       // A0
    DynArray<MorphTargetMeshEntry> targets; // B0
    CRenderMorphTargetMesh* renderResource; // C0
    uint8_t unkC8[0xD0 - 0xC8];             // C8
};
RED4EXT_ASSERT_SIZE(MorphTargetMesh, 0xD0);
} // namespace RED4ext
