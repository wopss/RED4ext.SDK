#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct StaticGpsLocationEntranceMarkerNode : world::Node
{
    static constexpr const char* NAME = "worldStaticGpsLocationEntranceMarkerNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StaticGpsLocationEntranceMarkerNode, 0x38);
} // namespace world
using worldStaticGpsLocationEntranceMarkerNode = world::StaticGpsLocationEntranceMarkerNode;
} // namespace RED4ext

// clang-format on
