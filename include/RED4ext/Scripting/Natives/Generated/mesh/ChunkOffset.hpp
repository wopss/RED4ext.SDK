#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace mesh
{
struct ChunkOffset
{
    static constexpr const char* NAME = "meshChunkOffset";
    static constexpr const char* ALIAS = NAME;

    uint32_t chunkIndex; // 00
    uint16_t start; // 04
    uint16_t count; // 06
};
RED4EXT_ASSERT_SIZE(ChunkOffset, 0x8);
} // namespace mesh
using meshChunkOffset = mesh::ChunkOffset;
} // namespace RED4ext

// clang-format on
