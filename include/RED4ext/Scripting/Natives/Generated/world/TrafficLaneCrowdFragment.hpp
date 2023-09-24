#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/DesiredSlotsCountInfo.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficLaneCrowdFragment
{
    static constexpr const char* NAME = "worldTrafficLaneCrowdFragment";
    static constexpr const char* ALIAS = NAME;

    StaticArray<world::DesiredSlotsCountInfo, 4> desiredSlotCountsPerTimePeriod; // 00
    uint32_t crowdCreationDataIndex; // 34
    float laneX1; // 38
    float laneX2; // 3C
};
RED4EXT_ASSERT_SIZE(TrafficLaneCrowdFragment, 0x40);
} // namespace world
using worldTrafficLaneCrowdFragment = world::TrafficLaneCrowdFragment;
} // namespace RED4ext

// clang-format on
