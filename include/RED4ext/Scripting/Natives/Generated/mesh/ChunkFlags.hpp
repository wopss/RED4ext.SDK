#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace mesh
{
struct ChunkFlags
{
    static constexpr const char* NAME = "meshChunkFlags";
    static constexpr const char* ALIAS = NAME;

    bool renderInScene; // 00
    bool renderInShadows; // 01
    bool isTwoSided; // 02
    bool isRayTracedEmissive; // 03
    bool isConsoleLOD0; // 04
    bool skipDynamicDecalGeneration; // 05
};
RED4EXT_ASSERT_SIZE(ChunkFlags, 0x6);
} // namespace mesh
using meshChunkFlags = mesh::ChunkFlags;
} // namespace RED4ext

// clang-format on
