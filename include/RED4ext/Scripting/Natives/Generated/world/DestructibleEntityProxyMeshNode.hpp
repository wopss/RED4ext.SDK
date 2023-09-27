#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EntityProxyMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct DestructibleEntityProxyMeshNode : world::EntityProxyMeshNode
{
    static constexpr const char* NAME = "worldDestructibleEntityProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DestructibleEntityProxyMeshNode, 0x78);
} // namespace world
using worldDestructibleEntityProxyMeshNode = world::DestructibleEntityProxyMeshNode;
} // namespace RED4ext

// clang-format on
