#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficLaneUID
{
    static constexpr const char* NAME = "worldTrafficLaneUID";
    static constexpr const char* ALIAS = NAME;

    uint64_t nodeRefHash; // 00
    uint16_t laneNumber; // 08
    uint16_t seqNumber; // 0A
    bool isReversed; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
};
RED4EXT_ASSERT_SIZE(TrafficLaneUID, 0x10);
} // namespace world
using worldTrafficLaneUID = world::TrafficLaneUID;
} // namespace RED4ext

// clang-format on
