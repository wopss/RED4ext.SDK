#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/WeaponBulletType.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/WeaponFireModeSounds.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/WeaponHandlingSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/WeaponShellCasingType.hpp>

namespace RED4ext
{
namespace audio
{
struct WeaponSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioWeaponSettings";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x48 - 0x38]; // 38
    CName chargeStartSound; // 48
    CName chargeReadySound; // 50
    CName chargeOverchargeSound; // 58
    CName chargeDischargeSound; // 60
    bool singleShotInSandevistan; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
    audio::WeaponHandlingSettings weaponHandlingSettings; // 70
    audio::WeaponFireModeSounds fireModeSounds; // 88
    audio::WeaponBulletType bulletType; // B0
    audio::WeaponShellCasingType shellCasingType; // B4
};
RED4EXT_ASSERT_SIZE(WeaponSettings, 0xB8);
} // namespace audio
using audioWeaponSettings = audio::WeaponSettings;
} // namespace RED4ext

// clang-format on
