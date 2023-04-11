#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SpeedSplineNodeOrientationChangeSection.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SpeedSplineNodeRoadAdjustmentFactorChangeSection.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SpeedSplineNodeSpeedChangeSection.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SpeedSplineNodeSpeedRestriction.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SplineNode.hpp>

namespace RED4ext
{
namespace world
{
struct SpeedSplineNode : world::SplineNode
{
    static constexpr const char* NAME = "worldSpeedSplineNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::SpeedSplineNodeSpeedChangeSection> speedChangeSections; // 70
    DynArray<world::SpeedSplineNodeOrientationChangeSection> orientationChangeSections; // 80
    DynArray<world::SpeedSplineNodeRoadAdjustmentFactorChangeSection> roadAdjustmentFactorChangeSections; // 90
    bool ignoreTerrain; // A0
    bool useDeprecated; // A1
    uint8_t unkA2[0xA8 - 0xA2]; // A2
    DynArray<world::SpeedSplineNodeSpeedRestriction> deprecatedSpeedRestrictions; // A8
    float deprecatedDefaultSpeed; // B8
    float deprecatedDefaultAdjustTime; // BC
    uint8_t unkC0[0xC8 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(SpeedSplineNode, 0xC8);
} // namespace world
using worldSpeedSplineNode = world::SpeedSplineNode;
} // namespace RED4ext

// clang-format on
