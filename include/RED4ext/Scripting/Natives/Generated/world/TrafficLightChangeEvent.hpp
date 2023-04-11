#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLightColor.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficLightChangeEvent : red::Event
{
    static constexpr const char* NAME = "worldTrafficLightChangeEvent";
    static constexpr const char* ALIAS = "TrafficLightChangeEvent";

    world::TrafficLightColor lightColor; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(TrafficLightChangeEvent, 0x48);
} // namespace world
using worldTrafficLightChangeEvent = world::TrafficLightChangeEvent;
using TrafficLightChangeEvent = world::TrafficLightChangeEvent;
} // namespace RED4ext

// clang-format on
