#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedPrefabProxyMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct CookedDestructibleProxyMeshNode : world::CookedPrefabProxyMeshNode
{
    static constexpr const char* NAME = "worldCookedDestructibleProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CookedDestructibleProxyMeshNode, 0x58);
} // namespace world
using worldCookedDestructibleProxyMeshNode = world::CookedDestructibleProxyMeshNode;
} // namespace RED4ext

// clang-format on
