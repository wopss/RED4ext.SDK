#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/WeaponSettings.hpp>

namespace RED4ext
{
namespace audio { struct WeaponEventOverrides; }

namespace audio { 
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
    CName triggerEffectSingle; // 128
    CName triggerEffectAiming; // 130
    CName triggerEffectAuto; // 138
    float timeLimitForAutoFireSingleShot; // 140
    float padVibrationGain; // 144
    float padVibrationReloadGain; // 148
    uint8_t unk14C[0x150 - 0x14C]; // 14C
    Handle<audio::WeaponEventOverrides> animEventOverrides; // 150
};
RED4EXT_ASSERT_SIZE(PlayerWeaponSettings, 0x160);
} // namespace audio
} // namespace RED4ext
