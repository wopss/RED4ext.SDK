#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EditorDebugColoringSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/NameColorPair.hpp>

namespace RED4ext
{
namespace world
{
struct DebugColoring_ResourceName : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_ResourceName";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::NameColorPair> names; // 30
    Color defaultColor; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(DebugColoring_ResourceName, 0x48);
} // namespace world
using worldDebugColoring_ResourceName = world::DebugColoring_ResourceName;
} // namespace RED4ext

// clang-format on
