#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct RaceSplineNodeOffset
{
    static constexpr const char* NAME = "worldRaceSplineNodeOffset";
    static constexpr const char* ALIAS = NAME;

    float from; // 00
    float to; // 04
    float left; // 08
    float right; // 0C
};
RED4EXT_ASSERT_SIZE(RaceSplineNodeOffset, 0x10);
} // namespace world
using worldRaceSplineNodeOffset = world::RaceSplineNodeOffset;
} // namespace RED4ext

// clang-format on
