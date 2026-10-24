#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedEntityProxyMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct CookedDestructibleEntityProxyMeshNode : world::CookedEntityProxyMeshNode
{
    static constexpr const char* NAME = "worldCookedDestructibleEntityProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CookedDestructibleEntityProxyMeshNode, 0x58);
} // namespace world
using worldCookedDestructibleEntityProxyMeshNode = world::CookedDestructibleEntityProxyMeshNode;
} // namespace RED4ext

// clang-format on
