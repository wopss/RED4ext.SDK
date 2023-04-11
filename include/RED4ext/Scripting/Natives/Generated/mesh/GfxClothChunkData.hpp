#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace mesh
{
struct GfxClothChunkData
{
    static constexpr const char* NAME = "meshGfxClothChunkData";
    static constexpr const char* ALIAS = NAME;

    DataBuffer positions; // 00
    DataBuffer indices; // 28
    DataBuffer skinWeights; // 50
    DataBuffer skinIndices; // 78
    DataBuffer skinWeightsExt; // A0
    DataBuffer skinIndicesExt; // C8
    DynArray<uint16_t> simulation; // F0
};
RED4EXT_ASSERT_SIZE(GfxClothChunkData, 0x100);
} // namespace mesh
using meshGfxClothChunkData = mesh::GfxClothChunkData;
} // namespace RED4ext

// clang-format on
