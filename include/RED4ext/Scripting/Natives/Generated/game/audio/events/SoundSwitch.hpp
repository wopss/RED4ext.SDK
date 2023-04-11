#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct SoundSwitch : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsSoundSwitch";
    static constexpr const char* ALIAS = "SoundSwitchEvent";

    CName switchName; // 40
    CName switchValue; // 48
};
RED4EXT_ASSERT_SIZE(SoundSwitch, 0x50);
} // namespace game::audio::events
using gameaudioeventsSoundSwitch = game::audio::events::SoundSwitch;
using SoundSwitchEvent = game::audio::events::SoundSwitch;
} // namespace RED4ext

// clang-format on
