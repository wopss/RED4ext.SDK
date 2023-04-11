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
struct ResurrectEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsResurrectEvent";
    static constexpr const char* ALIAS = "ResurrectEvent";

};
RED4EXT_ASSERT_SIZE(ResurrectEvent, 0x40);
} // namespace game::events
using gameeventsResurrectEvent = game::events::ResurrectEvent;
using ResurrectEvent = game::events::ResurrectEvent;
} // namespace RED4ext

// clang-format on
