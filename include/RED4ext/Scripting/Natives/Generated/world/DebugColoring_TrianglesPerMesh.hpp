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
struct DebugColoring_TrianglesPerMesh : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_TrianglesPerMesh";
    static constexpr const char* ALIAS = NAME;

    Color maxColor; // 30
    Color minColor; // 34
    uint32_t minCount; // 38
    uint32_t maxCount; // 3C
};
RED4EXT_ASSERT_SIZE(DebugColoring_TrianglesPerMesh, 0x40);
} // namespace world
using worldDebugColoring_TrianglesPerMesh = world::DebugColoring_TrianglesPerMesh;
} // namespace RED4ext

// clang-format on
