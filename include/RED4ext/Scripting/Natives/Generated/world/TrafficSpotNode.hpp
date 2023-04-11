#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AISpotNode.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficSpotNode : world::AISpotNode
{
    static constexpr const char* NAME = "worldTrafficSpotNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk98[0xA8 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(TrafficSpotNode, 0xA8);
} // namespace world
using worldTrafficSpotNode = world::TrafficSpotNode;
} // namespace RED4ext

// clang-format on
