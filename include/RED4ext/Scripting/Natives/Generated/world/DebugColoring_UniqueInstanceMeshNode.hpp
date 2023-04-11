#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EditorDebugColoringSettings.hpp>

namespace RED4ext
{
namespace world
{
struct DebugColoring_UniqueInstanceMeshNode : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_UniqueInstanceMeshNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DebugColoring_UniqueInstanceMeshNode, 0x30);
} // namespace world
using worldDebugColoring_UniqueInstanceMeshNode = world::DebugColoring_UniqueInstanceMeshNode;
} // namespace RED4ext

// clang-format on
