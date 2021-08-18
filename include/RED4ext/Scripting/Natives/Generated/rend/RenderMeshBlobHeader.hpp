#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/Chunk.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/TopologyData.hpp>

namespace RED4ext
{
namespace rend { 
struct RenderMeshBlobHeader
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
    DynArray<uint8_t> customData; // 58
    DynArray<uint8_t> topologyData; // 68
    DynArray<uint8_t> topologyMetadata; // 78
    DynArray<rend::TopologyData> topology; // 88
    uint32_t customDataElemStride; // 98
    uint32_t topologyDataStride; // 9C
    uint32_t topologyMetadataStride; // A0
    uint32_t vertexBufferSize; // A4
    uint32_t indexBufferSize; // A8
    uint32_t indexBufferOffset; // AC
    Vector4 quantizationScale; // B0
    Vector4 quantizationOffset; // C0
};
RED4EXT_ASSERT_SIZE(RenderMeshBlobHeader, 0xD0);
} // namespace rend
} // namespace RED4ext
