#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/EMeshChunkFlags.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/IndexBufferChunk.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/VertexBufferChunk.hpp>

namespace RED4ext
{
namespace rend
{
struct Chunk
{
    static constexpr const char* NAME = "rendChunk";
    static constexpr const char* ALIAS = NAME;

    rend::VertexBufferChunk chunkVertices; // 00
    rend::IndexBufferChunk chunkIndices; // D0
    DynArray<CName> materialId; // D8
    uint32_t numIndices; // E8
    uint16_t numVertices; // EC
    uint16_t baseRenderMask; // EE
    uint16_t mergedRenderMask; // F0
    EMeshChunkFlags renderMask; // F2
    uint8_t vertexFactory; // F4
    uint8_t lodMask; // F5
    uint8_t unkF6[0xF8 - 0xF6]; // F6
};
RED4EXT_ASSERT_SIZE(Chunk, 0xF8);
} // namespace rend
using rendChunk = rend::Chunk;
} // namespace RED4ext

// clang-format on
