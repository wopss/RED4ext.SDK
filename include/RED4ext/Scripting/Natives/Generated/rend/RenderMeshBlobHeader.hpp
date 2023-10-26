#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/Chunk.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/TopologyData.hpp>

namespace RED4ext
{
namespace rend
{
struct __declspec(align(0x10)) RenderMeshBlobHeader
{
    static constexpr const char* NAME = "rendRenderMeshBlobHeader";
    static constexpr const char* ALIAS = NAME;

    uint32_t version; // 00
    uint32_t dataProcessing; // 04
    DynArray<Vector4> bonePositions; // 08
    DynArray<float> renderLODs; // 18
    DynArray<uint8_t> renderChunks; // 28
    DynArray<rend::Chunk> renderChunkInfos; // 38
    DynArray<uint8_t> speedTreeWind; // 48
    DynArray<uint8_t> opacityMicromaps; // 58
    DynArray<uint8_t> customData; // 68
    DynArray<uint8_t> topologyData; // 78
    DynArray<uint8_t> topologyMetadata; // 88
    DynArray<rend::TopologyData> topology; // 98
    uint32_t customDataElemStride; // A8
    uint32_t topologyDataStride; // AC
    uint32_t topologyMetadataStride; // B0
    uint32_t vertexBufferSize; // B4
    uint32_t indexBufferSize; // B8
    uint32_t indexBufferOffset; // BC
    Vector4 quantizationScale; // C0
    Vector4 quantizationOffset; // D0
};
RED4EXT_ASSERT_SIZE(RenderMeshBlobHeader, 0xE0);
} // namespace rend
using rendRenderMeshBlobHeader = rend::RenderMeshBlobHeader;
} // namespace RED4ext

// clang-format on
