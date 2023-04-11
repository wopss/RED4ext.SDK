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
struct ToggleAimDownSightsEvent : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsToggleAimDownSightsEvent";
    static constexpr const char* ALIAS = "ToggleAimDownSightsEvent";

    bool toggleOn; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(ToggleAimDownSightsEvent, 0x48);
} // namespace game::audio::events
using gameaudioeventsToggleAimDownSightsEvent = game::audio::events::ToggleAimDownSightsEvent;
using ToggleAimDownSightsEvent = game::audio::events::ToggleAimDownSightsEvent;
} // namespace RED4ext

// clang-format on
