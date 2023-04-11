#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/RainIntensity.hpp>

namespace RED4ext
{
namespace world
{
struct RainEvent : red::Event
{
    static constexpr const char* NAME = "worldRainEvent";
    static constexpr const char* ALIAS = "RainEvent";

    world::RainIntensity rainIntensity; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(RainEvent, 0x48);
} // namespace world
using worldRainEvent = world::RainEvent;
using RainEvent = world::RainEvent;
} // namespace RED4ext

// clang-format on
