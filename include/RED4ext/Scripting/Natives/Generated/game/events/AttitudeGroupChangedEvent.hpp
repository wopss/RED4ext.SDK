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
struct AttitudeGroupChangedEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsAttitudeGroupChangedEvent";
    static constexpr const char* ALIAS = "AttitudeGroupChangedEvent";

};
RED4EXT_ASSERT_SIZE(AttitudeGroupChangedEvent, 0x40);
} // namespace game::events
using gameeventsAttitudeGroupChangedEvent = game::events::AttitudeGroupChangedEvent;
using AttitudeGroupChangedEvent = game::events::AttitudeGroupChangedEvent;
} // namespace RED4ext

// clang-format on
