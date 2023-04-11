#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudEventStruct.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudSwitch.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct AudioEventNodeType : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questAudioEventNodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::AudEventStruct> events; // 40
    DynArray<audio::AudEventStruct> musicEvents; // 50
    DynArray<audio::AudSwitch> switches; // 60
    DynArray<audio::AudParameter> params; // 70
    DynArray<CName> dynamicParams; // 80
    audio::AudEventStruct event; // 90
    CName ambientUniqueName; // 98
    bool isMusic; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
    CName emitter; // A8
    game::EntityReference objectRef; // B0
    bool isPlayer; // E8
    uint8_t unkE9[0xF0 - 0xE9]; // E9
};
RED4EXT_ASSERT_SIZE(AudioEventNodeType, 0xF0);
} // namespace quest
using questAudioEventNodeType = quest::AudioEventNodeType;
} // namespace RED4ext

// clang-format on
