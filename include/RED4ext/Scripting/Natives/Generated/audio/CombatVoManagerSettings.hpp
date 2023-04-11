#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct CombatVoManagerSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioCombatVoManagerSettings";
    static constexpr const char* ALIAS = NAME;

    float thresholdDbForCombatDialog; // 38
    float maxVoHearableHorizontalDistance; // 3C
    float maxVoHearableVerticalDistance; // 40
    float maxVoVisibleDistance; // 44
    float triggerVoEventBufferTime; // 48
    float triggerIdleChattersTime; // 4C
    float minNoVOTimeNeededToTryPlayingGenericVO; // 50
    float specificVoicesetVoVariationMinRepeatTime; // 54
    float forceApucVoiceTagSelectionProbability; // 58
    float voiceTagSelectionRandomTimeOffset; // 5C
    DynArray<CName> genericRelaxedVOContexts; // 60
    DynArray<CName> genericFearVOContexts; // 70
    DynArray<CName> genericAlertedVOContexts; // 80
    DynArray<CName> genericCombatVOContexts; // 90
    DynArray<CName> genericCombatLosingVOContexts; // A0
    DynArray<CName> genericCombatSingleEnemyVOContexts; // B0
};
RED4EXT_ASSERT_SIZE(CombatVoManagerSettings, 0xC0);
} // namespace audio
using audioCombatVoManagerSettings = audio::CombatVoManagerSettings;
} // namespace RED4ext

// clang-format on
