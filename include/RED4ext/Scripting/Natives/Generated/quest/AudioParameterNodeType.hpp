#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct AudioParameterNodeType : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questAudioParameterNodeType";
    static constexpr const char* ALIAS = NAME;

    audio::AudParameter param; // 40
    bool isMusic; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
    game::EntityReference objectRef; // 70
    bool isPlayer; // A8
    uint8_t unkA9[0xB0 - 0xA9]; // A9
};
RED4EXT_ASSERT_SIZE(AudioParameterNodeType, 0xB0);
} // namespace quest
using questAudioParameterNodeType = quest::AudioParameterNodeType;
} // namespace RED4ext

// clang-format on
