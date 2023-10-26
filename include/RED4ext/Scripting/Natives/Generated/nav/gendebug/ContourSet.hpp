#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/gendebug/CompactContour.hpp>

namespace RED4ext
{
namespace nav::gendebug
{
struct __declspec(align(0x10)) ContourSet
{
    static constexpr const char* NAME = "navgendebugContourSet";
    static constexpr const char* ALIAS = NAME;

    DynArray<nav::gendebug::CompactContour> contours; // 00
    Box boundingBox; // 10
    int32_t width; // 30
    int32_t height; // 34
    float cellSize; // 38
    float cellHeight; // 3C
    int32_t borderSize; // 40
    float maxError; // 44
    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ContourSet, 0x50);
} // namespace nav::gendebug
using navgendebugContourSet = nav::gendebug::ContourSet;
} // namespace RED4ext

// clang-format on
