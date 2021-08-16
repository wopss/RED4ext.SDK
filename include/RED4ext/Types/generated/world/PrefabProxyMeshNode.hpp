#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/world/GlobalNodeID.hpp>
#include <RED4ext/Types/generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace world { 
struct PrefabProxyMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldPrefabProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

    world::GlobalNodeID ancestorPrefabProxyMeshNodeID; // 58
    world::GlobalNodeID ownerPrefabNodeId; // 60
    uint32_t nbNodesUnderProxy; // 68
    float nearAutoHideDistance; // 6C
};
RED4EXT_ASSERT_SIZE(PrefabProxyMeshNode, 0x70);
} // namespace world
} // namespace RED4ext
