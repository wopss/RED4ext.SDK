#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SplineNode.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficSourceNode : world::SplineNode
{
    static constexpr const char* NAME = "worldTrafficSourceNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TrafficSourceNode, 0x70);
} // namespace world
using worldTrafficSourceNode = world::TrafficSourceNode;
} // namespace RED4ext

// clang-format on
