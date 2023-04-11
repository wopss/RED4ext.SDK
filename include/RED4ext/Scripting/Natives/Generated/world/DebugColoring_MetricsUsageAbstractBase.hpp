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
struct DebugColoring_MetricsUsageAbstractBase : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_MetricsUsageAbstractBase";
    static constexpr const char* ALIAS = NAME;

    Color minColor; // 30
    Color maxColor; // 34
    uint32_t minSize; // 38
    uint32_t maxSize; // 3C
};
RED4EXT_ASSERT_SIZE(DebugColoring_MetricsUsageAbstractBase, 0x40);
} // namespace world
using worldDebugColoring_MetricsUsageAbstractBase = world::DebugColoring_MetricsUsageAbstractBase;
} // namespace RED4ext

// clang-format on
