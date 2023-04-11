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
struct DebugColoring_CollisionMeshes : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_CollisionMeshes";
    static constexpr const char* ALIAS = NAME;

    Color collisionMeshColor; // 30
    Color prefabColor; // 34
    Color defaultColor; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(DebugColoring_CollisionMeshes, 0x40);
} // namespace world
using worldDebugColoring_CollisionMeshes = world::DebugColoring_CollisionMeshes;
} // namespace RED4ext

// clang-format on
