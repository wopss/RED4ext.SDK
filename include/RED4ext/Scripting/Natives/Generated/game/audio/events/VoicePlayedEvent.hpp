#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoGruntType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct VoicePlayedEvent : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsVoicePlayedEvent";
    static constexpr const char* ALIAS = "VoicePlayedEvent";

    CName eventName; // 40
    audio::VoGruntType gruntType; // 48
    bool isV; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
};
RED4EXT_ASSERT_SIZE(VoicePlayedEvent, 0x50);
} // namespace game::audio::events
using gameaudioeventsVoicePlayedEvent = game::audio::events::VoicePlayedEvent;
using VoicePlayedEvent = game::audio::events::VoicePlayedEvent;
} // namespace RED4ext

// clang-format on
