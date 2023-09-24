#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace ent
{
struct GarmentParameterChunkData
{
    static constexpr const char* NAME = "entGarmentParameterChunkData";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint8_t> morphOffsetScales; // 00
    uint64_t morphOffsetScalesHash; // 10
    DynArray<uint16_t> visibleTriangleInds; // 18
    DynArray<uint32_t> vertexTbn; // 28
};
RED4EXT_ASSERT_SIZE(GarmentParameterChunkData, 0x38);
} // namespace ent
using entGarmentParameterChunkData = ent::GarmentParameterChunkData;
} // namespace RED4ext

// clang-format on
