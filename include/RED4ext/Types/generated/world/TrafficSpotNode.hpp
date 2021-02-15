#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/AISpotNode.hpp>

namespace RED4ext
{
namespace world { 
struct TrafficSpotNode : world::AISpotNode
{
    static constexpr const char* NAME = "worldTrafficSpotNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkA0[0xB8 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(TrafficSpotNode, 0xB8);
} // namespace world
} // namespace RED4ext
