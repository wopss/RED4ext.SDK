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
struct DebugColoring_ProxyMeshDependency : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_ProxyMeshDependency";
    static constexpr const char* ALIAS = NAME;

    Color noneColor; // 30
    Color hasProxyColor; // 34
    Color discardColor; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(DebugColoring_ProxyMeshDependency, 0x40);
} // namespace world
using worldDebugColoring_ProxyMeshDependency = world::DebugColoring_ProxyMeshDependency;
} // namespace RED4ext

// clang-format on
