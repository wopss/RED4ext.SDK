#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct SpeedSplineNodeSpeedChangeSection
{
    static constexpr const char* NAME = "worldSpeedSplineNodeSpeedChangeSection";
    static constexpr const char* ALIAS = NAME;

    float start; // 00
    float end; // 04
    float targetSpeed_M_P_S; // 08
};
RED4EXT_ASSERT_SIZE(SpeedSplineNodeSpeedChangeSection, 0xC);
} // namespace world
using worldSpeedSplineNodeSpeedChangeSection = world::SpeedSplineNodeSpeedChangeSection;
} // namespace RED4ext

// clang-format on
