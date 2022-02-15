#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace world { 
struct PrefabProxyMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldPrefabProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

    uint32_t nbNodesUnderProxy; // 58
    float nearAutoHideDistance; // 5C
};
RED4EXT_ASSERT_SIZE(PrefabProxyMeshNode, 0x60);
} // namespace world
} // namespace RED4ext
