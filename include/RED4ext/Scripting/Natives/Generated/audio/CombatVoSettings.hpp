#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/GeneralVoiceGruntSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoiceTriggerLimits.hpp>

namespace RED4ext
{
namespace audio
{
struct CombatVoSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioCombatVoSettings";
    static constexpr const char* ALIAS = NAME;

    CName answerGroupName; // 38
    bool isPlayerAlly; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
    audio::GeneralVoiceGruntSettings generalGruntSettings; // 48
    audio::VoiceTriggerLimits voTriggerLimits; // 138
    audio::VoiceTriggerLimits barkTriggerLimits; // 14C
    audio::VoiceTriggerLimits gruntTriggerLimits; // 160
    float minDamageToInterruptVoWithPainShort; // 174
    float minDamageToInterruptVoWithPainLong; // 178
    uint8_t unk17C[0x180 - 0x17C]; // 17C
    CName contexts; // 180
    CName overridingVoTriggerLimits; // 188
    CName voTriggerVariations; // 190
    uint8_t unk198[0x1A8 - 0x198]; // 198
};
RED4EXT_ASSERT_SIZE(CombatVoSettings, 0x1A8);
} // namespace audio
using audioCombatVoSettings = audio::CombatVoSettings;
} // namespace RED4ext

// clang-format on
