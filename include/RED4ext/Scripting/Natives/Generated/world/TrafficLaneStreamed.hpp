#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) TrafficLaneStreamed
{
    static constexpr const char* NAME = "worldTrafficLaneStreamed";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x60 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(TrafficLaneStreamed, 0x60);
} // namespace world
using worldTrafficLaneStreamed = world::TrafficLaneStreamed;
} // namespace RED4ext

// clang-format on
