#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/DesiredSlotsCountInfo.hpp>

namespace RED4ext
{
namespace world { 
struct TrafficLaneCrowdFragment
{
    static constexpr const char* NAME = "worldTrafficLaneCrowdFragment";
    static constexpr const char* ALIAS = NAME;

    StaticArray<world::DesiredSlotsCountInfo, 4> desiredSlotCountsPerTimePeriod; // 00
    uint32_t crowdCreationDataIndex; // 24
    float laneX1; // 28
    float laneX2; // 2C
};
RED4EXT_ASSERT_SIZE(TrafficLaneCrowdFragment, 0x30);
} // namespace world
} // namespace RED4ext
