#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GlobalNodeID.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabProxyMeshNode.hpp>

namespace RED4ext
{
namespace world { 
struct EntityProxyMeshNode : world::PrefabProxyMeshNode
{
    static constexpr const char* NAME = "worldEntityProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

    world::GlobalNodeID ownerGlobalId; // 60
    float entityAttachDistance; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(EntityProxyMeshNode, 0x70);
} // namespace world
} // namespace RED4ext
