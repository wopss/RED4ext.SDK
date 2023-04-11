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
struct PickUpBodyBreathingEvent : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsPickUpBodyBreathingEvent";
    static constexpr const char* ALIAS = "PickUpBodyBreathingEvent";

};
RED4EXT_ASSERT_SIZE(PickUpBodyBreathingEvent, 0x40);
} // namespace game::audio::events
using gameaudioeventsPickUpBodyBreathingEvent = game::audio::events::PickUpBodyBreathingEvent;
using PickUpBodyBreathingEvent = game::audio::events::PickUpBodyBreathingEvent;
} // namespace RED4ext

// clang-format on
