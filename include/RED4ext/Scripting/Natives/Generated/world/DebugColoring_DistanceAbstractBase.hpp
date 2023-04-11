#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EditorDebugColoringSettings.hpp>

namespace RED4ext
{
namespace world
{
struct DebugColoring_DistanceAbstractBase : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_DistanceAbstractBase";
    static constexpr const char* ALIAS = NAME;

    Color minColor; // 30
    Color maxColor; // 34
    float minDistance; // 38
    float maxDistance; // 3C
};
RED4EXT_ASSERT_SIZE(DebugColoring_DistanceAbstractBase, 0x40);
} // namespace world
using worldDebugColoring_DistanceAbstractBase = world::DebugColoring_DistanceAbstractBase;
} // namespace RED4ext

// clang-format on
