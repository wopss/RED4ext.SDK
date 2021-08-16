#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/world/AreaShapeNode.hpp>
#include <RED4ext/Types/generated/world/EDeniedAreaFlags.hpp>

namespace RED4ext
{
namespace world { 
struct NavigationDeniedAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldNavigationDeniedAreaNode";
    static constexpr const char* ALIAS = NAME;

    world::EDeniedAreaFlags flags; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(NavigationDeniedAreaNode, 0x68);
} // namespace world
} // namespace RED4ext
