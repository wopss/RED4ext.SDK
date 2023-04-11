#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EditorDebugColoringSettings.hpp>

namespace RED4ext
{
namespace world { struct Prefab; }

namespace world
{
struct DebugColoring_Duplicates : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_Duplicates";
    static constexpr const char* ALIAS = NAME;

    Color defaultColor; // 30
    Color duplicateColor; // 34
    Ref<world::Prefab> refreshPrefab; // 38
    bool refresh; // 50
    uint8_t unk51[0x90 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(DebugColoring_Duplicates, 0x90);
} // namespace world
using worldDebugColoring_Duplicates = world::DebugColoring_Duplicates;
} // namespace RED4ext

// clang-format on
