#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EditorDebugColoringSettings.hpp>

namespace RED4ext
{
namespace world { 
struct DebugColoring_Climbable : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_Climbable";
    static constexpr const char* ALIAS = NAME;

    Color climbableColour; // 30
    Color notClimbableColour; // 34
};
RED4EXT_ASSERT_SIZE(DebugColoring_Climbable, 0x38);
} // namespace world
} // namespace RED4ext
