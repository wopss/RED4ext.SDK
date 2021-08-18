#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world { 
struct TrafficLanePlayerGPSInfo
{
    static constexpr const char* NAME = "worldTrafficLanePlayerGPSInfo";
    static constexpr const char* ALIAS = NAME;

    uint16_t subGraphId; // 00
    uint16_t stronglyConnectedComponentId; // 02
};
RED4EXT_ASSERT_SIZE(TrafficLanePlayerGPSInfo, 0x4);
} // namespace world
} // namespace RED4ext
