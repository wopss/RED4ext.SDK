#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world
{
struct BlockoutEdge
{
    static constexpr const char* NAME = "worldBlockoutEdge";
    static constexpr const char* ALIAS = NAME;

    NativeArray<uint32_t, 2> points; // 00
    NativeArray<uint32_t, 2> areas; // 08
    bool isFree; // 10
    uint8_t unk11[0x14 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(BlockoutEdge, 0x14);
} // namespace world
using worldBlockoutEdge = world::BlockoutEdge;
} // namespace RED4ext

// clang-format on
