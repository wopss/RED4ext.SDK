#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/PerfectChargePerkSounds.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/WeaponSettings.hpp>

namespace RED4ext
{
namespace audio { struct WeaponEventOverrides; }

namespace audio
{
struct PlayerWeaponSettings : audio::WeaponSettings
{
    static constexpr const char* NAME = "audioPlayerWeaponSettings";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB8[0xC0 - 0xB8]; // B8
    CName tails; // C0
    CName fireSound; // C8
    CName preFireSound; // D0
    CName burstFireSound; // D8
    CName autoFireSound; // E0
    CName autoFireStop; // E8
    CName shellCasingsSettings; // F0
    CName quickMeleeHitEvent; // F8
    CName initEvent; // 100
    CName shutdownEvent; // 108
    CName aimEnterSound; // 110
    CName aimExitSound; // 118
    CName dryFireSound; // 120
    CName reloadSound; // 128
    CName triggerEffectSingle; // 130
    CName triggerEffectAiming; // 138
    CName triggerEffectAuto; // 140
    float timeLimitForAutoFireSingleShot; // 148
    float padVibrationGain; // 14C
    float padVibrationReloadGain; // 150
    uint8_t unk154[0x158 - 0x154]; // 154
    Handle<audio::WeaponEventOverrides> animEventOverrides; // 158
    audio::PerfectChargePerkSounds perfectChargePerkSounds; // 168
};
RED4EXT_ASSERT_SIZE(PlayerWeaponSettings, 0x180);
} // namespace audio
using audioPlayerWeaponSettings = audio::PlayerWeaponSettings;
} // namespace RED4ext

// clang-format on
