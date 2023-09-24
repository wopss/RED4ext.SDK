#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GlobalNodeID.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabProxyMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct EntityProxyMeshNode : world::PrefabProxyMeshNode
{
    static constexpr const char* NAME = "worldEntityProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

    world::GlobalNodeID ownerGlobalId; // 68
    float entityAttachDistance; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(EntityProxyMeshNode, 0x78);
} // namespace world
using worldEntityProxyMeshNode = world::EntityProxyMeshNode;
} // namespace RED4ext

// clang-format on
