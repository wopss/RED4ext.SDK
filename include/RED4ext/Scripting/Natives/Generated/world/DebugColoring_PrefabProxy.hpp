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
struct DebugColoring_PrefabProxy : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_PrefabProxy";
    static constexpr const char* ALIAS = NAME;

    Color regularMeshColor; // 30
    Color instancedMeshColor; // 34
    Color prefabProxyMeshColor; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    bool distinguishInstancedMesh; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(DebugColoring_PrefabProxy, 0x48);
} // namespace world
using worldDebugColoring_PrefabProxy = world::DebugColoring_PrefabProxy;
} // namespace RED4ext

// clang-format on
