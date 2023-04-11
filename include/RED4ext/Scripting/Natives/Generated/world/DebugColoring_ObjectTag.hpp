#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EditorDebugColoringSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ObjectTag.hpp>

namespace RED4ext
{
namespace world
{
struct DebugColoring_ObjectTag : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_ObjectTag";
    static constexpr const char* ALIAS = NAME;

    world::ObjectTag tag; // 30
    Color color; // 34
};
RED4EXT_ASSERT_SIZE(DebugColoring_ObjectTag, 0x38);
} // namespace world
using worldDebugColoring_ObjectTag = world::DebugColoring_ObjectTag;
} // namespace RED4ext

// clang-format on
