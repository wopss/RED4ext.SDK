#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/DebugColoring_MetricsUsageAbstractBase.hpp>

namespace RED4ext
{
namespace world
{
struct DebugColoring_GPUMemoryUsage : world::DebugColoring_MetricsUsageAbstractBase
{
    static constexpr const char* NAME = "worldDebugColoring_GPUMemoryUsage";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DebugColoring_GPUMemoryUsage, 0x40);
} // namespace world
using worldDebugColoring_GPUMemoryUsage = world::DebugColoring_GPUMemoryUsage;
} // namespace RED4ext

// clang-format on
