#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/ChunkOffset.hpp>

namespace RED4ext
{
namespace mesh
{
struct RegionData
{
    static constexpr const char* NAME = "meshRegionData";
    static constexpr const char* ALIAS = NAME;

    DynArray<mesh::ChunkOffset> chunkDataIntact; // 00
    DynArray<mesh::ChunkOffset> chunkDataFractured; // 10
    uint64_t chunkMaskIntact; // 20
    uint64_t chunkMaskFractured; // 28
    bool isStaticRemains; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(RegionData, 0x38);
} // namespace mesh
using meshRegionData = mesh::RegionData;
} // namespace RED4ext

// clang-format on
