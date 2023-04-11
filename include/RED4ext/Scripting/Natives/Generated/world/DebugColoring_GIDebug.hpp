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
struct DebugColoring_GIDebug : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_GIDebug";
    static constexpr const char* ALIAS = NAME;

    Color GIVisibleColor; // 30
    Color GITransparentColor; // 34
};
RED4EXT_ASSERT_SIZE(DebugColoring_GIDebug, 0x38);
} // namespace world
using worldDebugColoring_GIDebug = world::DebugColoring_GIDebug;
} // namespace RED4ext

// clang-format on
