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
struct DebugColoring_Discarded : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_Discarded";
    static constexpr const char* ALIAS = NAME;

    Color color; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(DebugColoring_Discarded, 0x38);
} // namespace world
using worldDebugColoring_Discarded = world::DebugColoring_Discarded;
} // namespace RED4ext

// clang-format on
