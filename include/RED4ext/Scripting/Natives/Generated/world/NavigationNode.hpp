#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world { struct NavigationTileResource; }

namespace world
{
struct NavigationNode : world::Node
{
    static constexpr const char* NAME = "worldNavigationNode";
    static constexpr const char* ALIAS = NAME;

    RaRef<world::NavigationTileResource> navigationTileResource; // 38
};
RED4EXT_ASSERT_SIZE(NavigationNode, 0x40);
} // namespace world
using worldNavigationNode = world::NavigationNode;
} // namespace RED4ext

// clang-format on
