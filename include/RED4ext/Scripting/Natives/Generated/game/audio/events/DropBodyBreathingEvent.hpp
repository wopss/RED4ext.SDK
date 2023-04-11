#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct DropBodyBreathingEvent : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsDropBodyBreathingEvent";
    static constexpr const char* ALIAS = "DropBodyBreathingEvent";

};
RED4EXT_ASSERT_SIZE(DropBodyBreathingEvent, 0x40);
} // namespace game::audio::events
using gameaudioeventsDropBodyBreathingEvent = game::audio::events::DropBodyBreathingEvent;
using DropBodyBreathingEvent = game::audio::events::DropBodyBreathingEvent;
} // namespace RED4ext

// clang-format on
