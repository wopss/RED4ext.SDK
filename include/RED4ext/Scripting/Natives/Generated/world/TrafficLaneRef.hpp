#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficLaneRef
{
    static constexpr const char* NAME = "worldTrafficLaneRef";
    static constexpr const char* ALIAS = NAME;

    NodeRef nodeRef; // 00
    uint16_t laneNumber; // 08
    bool isReversed; // 0A
    uint8_t unk0B[0x10 - 0xB]; // B
};
RED4EXT_ASSERT_SIZE(TrafficLaneRef, 0x10);
} // namespace world
using worldTrafficLaneRef = world::TrafficLaneRef;
} // namespace RED4ext

// clang-format on
