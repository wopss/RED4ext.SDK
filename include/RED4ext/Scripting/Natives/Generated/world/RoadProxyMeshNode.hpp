#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabProxyMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct RoadProxyMeshNode : world::PrefabProxyMeshNode
{
    static constexpr const char* NAME = "worldRoadProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RoadProxyMeshNode, 0x68);
} // namespace world
using worldRoadProxyMeshNode = world::RoadProxyMeshNode;
} // namespace RED4ext

// clang-format on
