#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace mesh
{
struct ChunkIndicesOffset
{
    static constexpr const char* NAME = "meshChunkIndicesOffset";
    static constexpr const char* ALIAS = NAME;

    uint32_t start; // 00
    uint32_t count; // 04
    uint8_t boneIndex; // 08
    uint8_t unk09[0xC - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(ChunkIndicesOffset, 0xC);
} // namespace mesh
using meshChunkIndicesOffset = mesh::ChunkIndicesOffset;
} // namespace RED4ext

// clang-format on
