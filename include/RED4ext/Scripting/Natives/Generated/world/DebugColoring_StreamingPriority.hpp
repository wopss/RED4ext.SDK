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
struct DebugColoring_StreamingPriority : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_StreamingPriority";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DebugColoring_StreamingPriority, 0x30);
} // namespace world
using worldDebugColoring_StreamingPriority = world::DebugColoring_StreamingPriority;
} // namespace RED4ext

// clang-format on
