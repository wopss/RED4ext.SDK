#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace world
{
struct PlayerProximityStopEvent : red::Event
{
    static constexpr const char* NAME = "worldPlayerProximityStopEvent";
    static constexpr const char* ALIAS = "PlayerProximityStopEvent";

    CName profile; // 40
};
RED4EXT_ASSERT_SIZE(PlayerProximityStopEvent, 0x48);
} // namespace world
using worldPlayerProximityStopEvent = world::PlayerProximityStopEvent;
using PlayerProximityStopEvent = world::PlayerProximityStopEvent;
} // namespace RED4ext

// clang-format on
