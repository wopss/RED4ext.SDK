#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct SpeedSplineNodeSpeedRestriction
{
    static constexpr const char* NAME = "worldSpeedSplineNodeSpeedRestriction";
    static constexpr const char* ALIAS = NAME;

    float speed; // 00
    float from; // 04
    float adjustTime; // 08
};
RED4EXT_ASSERT_SIZE(SpeedSplineNodeSpeedRestriction, 0xC);
} // namespace world
using worldSpeedSplineNodeSpeedRestriction = world::SpeedSplineNodeSpeedRestriction;
} // namespace RED4ext

// clang-format on
