#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/world/GlobalNodeID.hpp>
#include <RED4ext/Types/generated/world/PrefabProxyMeshNode.hpp>

namespace RED4ext
{
namespace world { 
struct EntityProxyMeshNode : world::PrefabProxyMeshNode
{
    static constexpr const char* NAME = "worldEntityProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

    world::GlobalNodeID ownerGlobalId; // 70
    float entityAttachDistance; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(EntityProxyMeshNode, 0x80);
} // namespace world
} // namespace RED4ext
