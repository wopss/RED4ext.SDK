#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/audio/AudioMetadata.hpp>
#include <RED4ext/Types/generated/audio/VoBarkType.hpp>
#include <RED4ext/Types/generated/audio/VoGruntInterruptMode.hpp>
#include <RED4ext/Types/generated/audio/VoGruntType.hpp>
#include <RED4ext/Types/generated/audio/VoiceContextAnswer.hpp>
#include <RED4ext/Types/generated/loc/VoiceoverContext.hpp>

namespace RED4ext
{
namespace audio { 
struct VoiceContextMapItem : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioVoiceContextMapItem";
    static constexpr const char* ALIAS = NAME;

    CName voTrigger; // 38
    audio::VoBarkType bark; // 40
    audio::VoGruntType grunt; // 44
    audio::VoiceContextAnswer answer; // 48
    loc::VoiceoverContext overridingVoContext; // 58
    audio::VoGruntInterruptMode gruntInterruptMode; // 5C
};
RED4EXT_ASSERT_SIZE(VoiceContextMapItem, 0x60);
} // namespace audio
} // namespace RED4ext
