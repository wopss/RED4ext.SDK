#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/audio/AudioMetadata.hpp>
#include <RED4ext/Types/generated/audio/WeaponBulletType.hpp>
#include <RED4ext/Types/generated/audio/WeaponFireModeSounds.hpp>
#include <RED4ext/Types/generated/audio/WeaponHandlingSettings.hpp>
#include <RED4ext/Types/generated/audio/WeaponShellCasingType.hpp>

namespace RED4ext
{
namespace audio { 
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
} // namespace RED4ext
