#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace game
{
struct WorldBoundaryNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "gameWorldBoundaryNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(WorldBoundaryNode, 0x60);
} // namespace game
using gameWorldBoundaryNode = game::WorldBoundaryNode;
} // namespace RED4ext

// clang-format on
