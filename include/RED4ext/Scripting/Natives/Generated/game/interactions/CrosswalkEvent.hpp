#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLightColor.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct CrosswalkEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsCrosswalkEvent";
    static constexpr const char* ALIAS = "CrosswalkEvent";

    world::TrafficLightColor trafficLightColor; // 40
    world::TrafficLightColor oldTrafficLightColor; // 44
    float totalDistance; // 48
    float distanceLeft; // 4C
};
RED4EXT_ASSERT_SIZE(CrosswalkEvent, 0x50);
} // namespace game::interactions
using gameinteractionsCrosswalkEvent = game::interactions::CrosswalkEvent;
using CrosswalkEvent = game::interactions::CrosswalkEvent;
} // namespace RED4ext

// clang-format on
