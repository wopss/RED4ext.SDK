#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct StaticMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldStaticMeshNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StaticMeshNode, 0x60);
} // namespace world
using worldStaticMeshNode = world::StaticMeshNode;
} // namespace RED4ext

// clang-format on
