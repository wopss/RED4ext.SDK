#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>

namespace RED4ext
{
namespace nav::gendebug
{
struct __declspec(align(0x10)) CompactContour
{
    static constexpr const char* NAME = "navgendebugCompactContour";
    static constexpr const char* ALIAS = NAME;

    DynArray<int32_t> rawVertices; // 00
    DynArray<int32_t> simplifiedVertices; // 10
    DynArray<int32_t> innerPoints; // 20
    uint16_t region; // 30
    uint8_t area; // 32
    uint8_t unk33[0x40 - 0x33]; // 33
    Box box; // 40
};
RED4EXT_ASSERT_SIZE(CompactContour, 0x60);
} // namespace nav::gendebug
using navgendebugCompactContour = nav::gendebug::CompactContour;
} // namespace RED4ext

// clang-format on
