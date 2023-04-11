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
struct DebugColoring_SameResourceName : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_SameResourceName";
    static constexpr const char* ALIAS = NAME;

    uint8_t alpha; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(DebugColoring_SameResourceName, 0x38);
} // namespace world
using worldDebugColoring_SameResourceName = world::DebugColoring_SameResourceName;
} // namespace RED4ext

// clang-format on
