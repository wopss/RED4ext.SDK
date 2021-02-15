#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/PrefabProxyMeshNode.hpp>

namespace RED4ext
{
namespace world { 
struct DestructibleProxyMeshNode : world::PrefabProxyMeshNode
{
    static constexpr const char* NAME = "worldDestructibleProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

    uint64_t ownerHash; // 70
};
RED4EXT_ASSERT_SIZE(DestructibleProxyMeshNode, 0x78);
} // namespace world
} // namespace RED4ext
