#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SpeedSplineOrientationMarkerType.hpp>

namespace RED4ext
{
namespace world
{
struct SpeedSplineNodeOrientationChangeSection
{
    static constexpr const char* NAME = "worldSpeedSplineNodeOrientationChangeSection";
    static constexpr const char* ALIAS = NAME;

    float pos; // 00
    world::SpeedSplineOrientationMarkerType type; // 04
    EulerAngles targetOrientation; // 08
};
RED4EXT_ASSERT_SIZE(SpeedSplineNodeOrientationChangeSection, 0x14);
} // namespace world
using worldSpeedSplineNodeOrientationChangeSection = world::SpeedSplineNodeOrientationChangeSection;
} // namespace RED4ext

// clang-format on
