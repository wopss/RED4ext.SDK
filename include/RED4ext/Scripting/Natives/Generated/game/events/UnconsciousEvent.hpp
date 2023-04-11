#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct UnconsciousEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsUnconsciousEvent";
    static constexpr const char* ALIAS = "gameUnconsciousEvent";

};
RED4EXT_ASSERT_SIZE(UnconsciousEvent, 0x40);
} // namespace game::events
using gameeventsUnconsciousEvent = game::events::UnconsciousEvent;
using gameUnconsciousEvent = game::events::UnconsciousEvent;
} // namespace RED4ext

// clang-format on
