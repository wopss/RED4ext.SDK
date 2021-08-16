#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EditorDebugColoringSettings.hpp>

namespace RED4ext
{
namespace world { 
struct DebugColoring_ProxyMeshDependency : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_ProxyMeshDependency";
    static constexpr const char* ALIAS = NAME;

    Color autoColor; // 30
    Color discardColor; // 34
};
RED4EXT_ASSERT_SIZE(DebugColoring_ProxyMeshDependency, 0x38);
} // namespace world
} // namespace RED4ext
