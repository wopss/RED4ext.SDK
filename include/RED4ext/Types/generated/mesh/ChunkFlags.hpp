#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace mesh { 
struct ChunkFlags
{
    static constexpr const char* NAME = "meshChunkFlags";
    static constexpr const char* ALIAS = NAME;

    bool renderInScene; // 00
    bool renderInShadows; // 01
    bool isTwoSided; // 02
    bool isRayTracedEmissive; // 03
};
RED4EXT_ASSERT_SIZE(ChunkFlags, 0x4);
} // namespace mesh
} // namespace RED4ext
