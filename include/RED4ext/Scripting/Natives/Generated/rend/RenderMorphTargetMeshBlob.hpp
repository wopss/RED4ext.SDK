#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IRenderResourceBlob.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderMorphTargetMeshBlobHeader.hpp>

namespace RED4ext
{
struct IRenderResourceBlob;

namespace rend
{
struct RenderMorphTargetMeshBlob : IRenderResourceBlob
{
    static constexpr const char* NAME = "rendRenderMorphTargetMeshBlob";
    static constexpr const char* ALIAS = NAME;

    Handle<IRenderResourceBlob> baseBlob; // 30
    rend::RenderMorphTargetMeshBlobHeader header; // 40
    DataBuffer diffsBuffer; // C0
    DataBuffer mappingBuffer; // E8
    DeferredDataBuffer textureDiffsBuffer; // 110
};
RED4EXT_ASSERT_SIZE(RenderMorphTargetMeshBlob, 0x168);
} // namespace rend
using rendRenderMorphTargetMeshBlob = rend::RenderMorphTargetMeshBlob;
} // namespace RED4ext

// clang-format on
