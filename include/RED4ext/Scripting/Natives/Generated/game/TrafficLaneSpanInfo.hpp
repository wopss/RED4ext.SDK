#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLaneUID.hpp>

namespace RED4ext
{
namespace game
{
struct TrafficLaneSpanInfo
{
    static constexpr const char* NAME = "gameTrafficLaneSpanInfo";
    static constexpr const char* ALIAS = NAME;

    world::TrafficLaneUID laneId; // 00
    float laneX1; // 10
    float laneX2; // 14
};
RED4EXT_ASSERT_SIZE(TrafficLaneSpanInfo, 0x18);
} // namespace game
using gameTrafficLaneSpanInfo = game::TrafficLaneSpanInfo;
} // namespace RED4ext

// clang-format on
