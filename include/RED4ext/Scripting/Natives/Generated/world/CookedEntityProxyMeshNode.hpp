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
struct CookedEntityProxyMeshNode : world::CookedPrefabProxyMeshNode
{
    static constexpr const char* NAME = "worldCookedEntityProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CookedEntityProxyMeshNode, 0x58);
} // namespace world
using worldCookedEntityProxyMeshNode = world::CookedEntityProxyMeshNode;
} // namespace RED4ext

// clang-format on
