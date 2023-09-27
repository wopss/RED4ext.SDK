#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabProxyMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct TerrainProxyMeshNode : world::PrefabProxyMeshNode
{
    static constexpr const char* NAME = "worldTerrainProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TerrainProxyMeshNode, 0x68);
} // namespace world
using worldTerrainProxyMeshNode = world::TerrainProxyMeshNode;
} // namespace RED4ext

// clang-format on
