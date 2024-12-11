#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudSwitch.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct AudioSwitchNodeType : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questAudioSwitchNodeType";
    static constexpr const char* ALIAS = NAME;

    audio::AudSwitch switch_; // 40 -- switch
    bool isMusic; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    game::EntityReference objectRef; // 58
    bool isPlayer; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
};
RED4EXT_ASSERT_SIZE(AudioSwitchNodeType, 0x98);
} // namespace quest
using questAudioSwitchNodeType = quest::AudioSwitchNodeType;
} // namespace RED4ext

// clang-format on
