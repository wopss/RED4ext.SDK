#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::weapon::events
{
struct StopFiringEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsStopFiringEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StopFiringEvent, 0x40);
} // namespace game::weapon::events
using gameweaponeventsStopFiringEvent = game::weapon::events::StopFiringEvent;
} // namespace RED4ext

// clang-format on
