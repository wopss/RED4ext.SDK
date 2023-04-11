#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoBarkType.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoGruntInterruptMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoGruntType.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoiceContextAnswer.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverContext.hpp>

namespace RED4ext
{
namespace audio
{
struct VoiceContextMapItem : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioVoiceContextMapItem";
    static constexpr const char* ALIAS = NAME;

    CName voTrigger; // 38
    audio::VoBarkType bark; // 40
    audio::VoGruntType grunt; // 44
    audio::VoiceContextAnswer answer; // 48
    loc::VoiceoverContext overridingVoContext; // 58
    uint8_t unk59[0x5C - 0x59]; // 59
    audio::VoGruntInterruptMode gruntInterruptMode; // 5C
};
RED4EXT_ASSERT_SIZE(VoiceContextMapItem, 0x60);
} // namespace audio
using audioVoiceContextMapItem = audio::VoiceContextMapItem;
} // namespace RED4ext

// clang-format on
