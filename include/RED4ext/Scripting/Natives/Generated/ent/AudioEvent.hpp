#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioEventFlags.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EventActionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AudioEvent : red::Event
{
    static constexpr const char* NAME = "entAudioEvent";
    static constexpr const char* ALIAS = "AudioEvent";

    CName eventName; // 40
    CName emitterName; // 48
    CName nameData; // 50
    float floatData; // 58
    audio::EventActionType eventType; // 5C
    audio::AudioEventFlags eventFlags; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(AudioEvent, 0x68);
} // namespace ent
using entAudioEvent = ent::AudioEvent;
using AudioEvent = ent::AudioEvent;
} // namespace RED4ext

// clang-format on
