#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeAttackSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/WeaponHandlingSettings.hpp>

namespace RED4ext
{
namespace audio
{
struct MeleeWeaponSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioMeleeWeaponSettings";
    static constexpr const char* ALIAS = NAME;

    audio::MeleeAttackSettings quickAttackSettings; // 38
    audio::MeleeAttackSettings strongAttackSettings; // 58
    audio::WeaponHandlingSettings weaponHandlingSettings; // 78
};
RED4EXT_ASSERT_SIZE(MeleeWeaponSettings, 0x90);
} // namespace audio
using audioMeleeWeaponSettings = audio::MeleeWeaponSettings;
} // namespace RED4ext

// clang-format on
