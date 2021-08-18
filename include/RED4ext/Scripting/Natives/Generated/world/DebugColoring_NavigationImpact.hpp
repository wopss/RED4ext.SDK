#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EditorDebugColoringSettings.hpp>

namespace RED4ext
{
namespace world { 
struct DebugColoring_NavigationImpact : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_NavigationImpact";
    static constexpr const char* ALIAS = NAME;

    Color walkable; // 30
    Color ignored; // 34
    Color blocking; // 38
    Color road; // 3C
    Color crowd_walkable; // 40 -- crowd walkable
    Color staris_walkable; // 44 -- staris walkable
    Color drones; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(DebugColoring_NavigationImpact, 0x50);
} // namespace world
} // namespace RED4ext
