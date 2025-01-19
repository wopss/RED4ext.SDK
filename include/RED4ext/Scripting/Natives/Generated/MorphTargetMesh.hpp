#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/MorphTargetMesh.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(MorphTargetMesh, 0xD0);
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/MorphTargetMeshEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>

namespace RED4ext
{
struct CMesh;
struct IRenderResourceBlob;
struct ITexture;

struct __declspec(align(0x10)) MorphTargetMesh : res::StreamedResource
{
    static constexpr const char* NAME = "MorphTargetMesh";
    static constexpr const char* ALIAS = NAME;

    Box boundingBox; // 40
    Ref<CMesh> baseMesh; // 60
    CName baseTextureParamName; // 78
    Ref<ITexture> baseTexture; // 80
    CName baseMeshAppearance; // 98
    Handle<IRenderResourceBlob> blob; // A0
    DynArray<MorphTargetMeshEntry> targets; // B0
    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(MorphTargetMesh, 0xD0);
} // namespace RED4ext
*/

// clang-format on
