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
struct DebugColoring_EPContext : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_EPContext";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DebugColoring_EPContext, 0x30);
} // namespace world
using worldDebugColoring_EPContext = world::DebugColoring_EPContext;
} // namespace RED4ext

// clang-format on
