#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/ContextualVoiceGruntSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoiceGruntVariations.hpp>

namespace RED4ext
{
namespace audio
{
struct GeneralVoiceGruntSettings
{
    static constexpr const char* NAME = "audioGeneralVoiceGruntSettings";
    static constexpr const char* ALIAS = NAME;

    audio::ContextualVoiceGruntSettings contextualVoiceGruntSettings; // 00
    CName painLong; // 20
    CName agressionShort; // 28
    CName agressionLong; // 30
    CName longFall; // 38
    CName death; // 40
    CName silentDeath; // 48
    CName grapple; // 50
    CName grappleMovement; // 58
    CName environmentalKnockdown; // 60
    CName bump; // 68
    CName curious; // 70
    CName fear; // 78
    CName jump; // 80
    CName effortLong; // 88
    CName deathShort; // 90
    CName greet; // 98
    CName laughHard; // A0
    CName laughSoft; // A8
    CName phone; // B0
    CName braindanceExcited; // B8
    CName braindanceFearful; // C0
    CName braindanceNeutral; // C8
    CName braindanceSexual; // D0
    uint32_t variationsCount; // D8
    uint8_t unkDC[0xE0 - 0xDC]; // DC
    audio::VoiceGruntVariations gruntVariations; // E0
};
RED4EXT_ASSERT_SIZE(GeneralVoiceGruntSettings, 0xF0);
} // namespace audio
using audioGeneralVoiceGruntSettings = audio::GeneralVoiceGruntSettings;
} // namespace RED4ext

// clang-format on
