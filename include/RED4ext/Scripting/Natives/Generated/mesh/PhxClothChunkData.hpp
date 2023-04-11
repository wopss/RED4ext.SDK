#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace mesh
{
struct PhxClothChunkData
{
    static constexpr const char* NAME = "meshPhxClothChunkData";
    static constexpr const char* ALIAS = NAME;

    DataBuffer positions; // 00
    DataBuffer indices; // 28
    DataBuffer skinWeights; // 50
    DataBuffer skinIndices; // 78
    DataBuffer skinWeightsExt; // A0
    DataBuffer skinIndicesExt; // C8
    DataBuffer cookedData; // F0
    DataBuffer normals; // 118
};
RED4EXT_ASSERT_SIZE(PhxClothChunkData, 0x140);
} // namespace mesh
using meshPhxClothChunkData = mesh::PhxClothChunkData;
} // namespace RED4ext

// clang-format on
