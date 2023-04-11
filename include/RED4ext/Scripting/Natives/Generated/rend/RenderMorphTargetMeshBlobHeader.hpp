#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderMorphTargetMeshBlobTextureData.hpp>

namespace RED4ext
{
namespace rend
{
struct RenderMorphTargetMeshBlobHeader
{
    static constexpr const char* NAME = "rendRenderMorphTargetMeshBlobHeader";
    static constexpr const char* ALIAS = NAME;

    uint32_t version; // 00
    uint32_t numDiffs; // 04
    uint32_t numDiffsMapping; // 08
    uint32_t numTargets; // 0C
    DynArray<uint32_t> targetStartsInVertexDiffs; // 10
    DynArray<uint32_t> targetStartsInVertexDiffsMapping; // 20
    DynArray<Vector4> targetPositionDiffScale; // 30
    DynArray<Vector4> targetPositionDiffOffset; // 40
    DynArray<DynArray<uint32_t>> numVertexDiffsInEachChunk; // 50
    DynArray<DynArray<uint32_t>> numVertexDiffsMappingInEachChunk; // 60
    DynArray<rend::RenderMorphTargetMeshBlobTextureData> targetTextureDiffsData; // 70
};
RED4EXT_ASSERT_SIZE(RenderMorphTargetMeshBlobHeader, 0x80);
} // namespace rend
using rendRenderMorphTargetMeshBlobHeader = rend::RenderMorphTargetMeshBlobHeader;
} // namespace RED4ext

// clang-format on
