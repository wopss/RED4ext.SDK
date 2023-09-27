#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace garment
{
struct MeshParamGarmentChunkData
{
    static constexpr const char* NAME = "garmentMeshParamGarmentChunkData";
    static constexpr const char* ALIAS = NAME;

    uint32_t numVertices; // 00
    uint8_t lodMask; // 04
    bool isTwoSided; // 05
    uint8_t unk06[0x8 - 0x6]; // 6
    DataBuffer vertices; // 08
    DataBuffer indices; // 30
    DataBuffer morphOffsets; // 58
    DataBuffer garmentFlags; // 80
    DataBuffer uv; // A8
};
RED4EXT_ASSERT_SIZE(MeshParamGarmentChunkData, 0xD0);
} // namespace garment
using garmentMeshParamGarmentChunkData = garment::MeshParamGarmentChunkData;
} // namespace RED4ext

// clang-format on
