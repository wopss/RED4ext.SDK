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
struct DebugColoring_NavigationImpact : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_NavigationImpact";
    static constexpr const char* ALIAS = NAME;

    Color walkable; // 30
    Color ignored; // 34
    Color blocking; // 38
    Color road; // 3C
    Color stairs_walkable; // 40 -- stairs walkable
    Color drones; // 44
    Color terrain; // 48
    Color everything_else; // 4C -- everything else
};
RED4EXT_ASSERT_SIZE(DebugColoring_NavigationImpact, 0x50);
} // namespace world
using worldDebugColoring_NavigationImpact = world::DebugColoring_NavigationImpact;
} // namespace RED4ext

// clang-format on
