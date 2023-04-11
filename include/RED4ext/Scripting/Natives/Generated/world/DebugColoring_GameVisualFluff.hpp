#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EditorDebugColoringSettings.hpp>

namespace RED4ext
{
namespace world
{
struct DebugColoring_GameVisualFluff : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_GameVisualFluff";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DebugColoring_GameVisualFluff, 0x30);
} // namespace world
using worldDebugColoring_GameVisualFluff = world::DebugColoring_GameVisualFluff;
} // namespace RED4ext

// clang-format on
