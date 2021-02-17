#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/world/TrafficLaneUID.hpp>

namespace RED4ext
{
namespace world { 
struct TrafficSyncPointCompiled
{
    static constexpr const char* NAME = "worldTrafficSyncPointCompiled";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::TrafficLaneUID> lanes; // 00
    DynArray<float> lanePositions; // 10
    float length; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(TrafficSyncPointCompiled, 0x28);
} // namespace world
} // namespace RED4ext
