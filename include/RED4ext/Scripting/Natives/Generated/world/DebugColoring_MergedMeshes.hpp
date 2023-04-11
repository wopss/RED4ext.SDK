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
struct DebugColoring_MergedMeshes : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_MergedMeshes";
    static constexpr const char* ALIAS = NAME;

    Color mergedMeshColor; // 30
    Color defaultColor; // 34
};
RED4EXT_ASSERT_SIZE(DebugColoring_MergedMeshes, 0x38);
} // namespace world
using worldDebugColoring_MergedMeshes = world::DebugColoring_MergedMeshes;
} // namespace RED4ext

// clang-format on
