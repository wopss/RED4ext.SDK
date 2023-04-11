#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
struct TerrainMeshNode : world::Node
{
    static constexpr const char* NAME = "worldTerrainMeshNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x48 - 0x38]; // 38
    Handle<CMesh> mesh; // 48
    RaRef<CMesh> meshRef; // 58
};
RED4EXT_ASSERT_SIZE(TerrainMeshNode, 0x60);
} // namespace world
using worldTerrainMeshNode = world::TerrainMeshNode;
} // namespace RED4ext

// clang-format on
