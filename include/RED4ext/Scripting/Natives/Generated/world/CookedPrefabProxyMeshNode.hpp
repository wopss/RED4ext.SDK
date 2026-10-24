#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct CookedPrefabProxyMeshNode : world::CookedMeshNode
{
    static constexpr const char* NAME = "worldCookedPrefabProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CookedPrefabProxyMeshNode, 0x58);
} // namespace world
using worldCookedPrefabProxyMeshNode = world::CookedPrefabProxyMeshNode;
} // namespace RED4ext

// clang-format on
