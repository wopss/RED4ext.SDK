#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoGruntInterruptMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoGruntType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct VoiceEvent : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsVoiceEvent";
    static constexpr const char* ALIAS = "VoicePlayEvent";

    CName eventName; // 40
    audio::VoGruntType gruntType; // 48
    audio::VoGruntInterruptMode gruntInterruptMode; // 4C
    bool isV; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(VoiceEvent, 0x58);
} // namespace game::audio::events
using gameaudioeventsVoiceEvent = game::audio::events::VoiceEvent;
using VoicePlayEvent = game::audio::events::VoiceEvent;
} // namespace RED4ext

// clang-format on
