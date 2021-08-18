#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace world { 
struct StaticMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldStaticMeshNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StaticMeshNode, 0x58);
} // namespace world
} // namespace RED4ext
