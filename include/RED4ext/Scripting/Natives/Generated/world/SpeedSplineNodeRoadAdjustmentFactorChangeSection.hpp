#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct SpeedSplineNodeRoadAdjustmentFactorChangeSection
{
    static constexpr const char* NAME = "worldSpeedSplineNodeRoadAdjustmentFactorChangeSection";
    static constexpr const char* ALIAS = NAME;

    float pos; // 00
    float targetFactor; // 04
};
RED4EXT_ASSERT_SIZE(SpeedSplineNodeRoadAdjustmentFactorChangeSection, 0x8);
} // namespace world
using worldSpeedSplineNodeRoadAdjustmentFactorChangeSection = world::SpeedSplineNodeRoadAdjustmentFactorChangeSection;
} // namespace RED4ext

// clang-format on
