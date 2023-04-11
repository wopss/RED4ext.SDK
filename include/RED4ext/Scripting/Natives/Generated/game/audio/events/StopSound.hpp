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
struct StopSound : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsStopSound";
    static constexpr const char* ALIAS = "SoundStopEvent";

    CName soundName; // 40
};
RED4EXT_ASSERT_SIZE(StopSound, 0x48);
} // namespace game::audio::events
using gameaudioeventsStopSound = game::audio::events::StopSound;
using SoundStopEvent = game::audio::events::StopSound;
} // namespace RED4ext

// clang-format on
