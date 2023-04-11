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
struct DebugColoring_StreamingCullingFlag : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_StreamingCullingFlag";
    static constexpr const char* ALIAS = NAME;

    Color cullableColor; // 30
    Color forceCulledAlwaysColor; // 34
    Color forceCulledPeripheralColor; // 38
    Color defaultColor; // 3C
};
RED4EXT_ASSERT_SIZE(DebugColoring_StreamingCullingFlag, 0x40);
} // namespace world
using worldDebugColoring_StreamingCullingFlag = world::DebugColoring_StreamingCullingFlag;
} // namespace RED4ext

// clang-format on
