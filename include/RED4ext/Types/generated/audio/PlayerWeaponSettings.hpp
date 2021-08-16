#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/audio/WeaponSettings.hpp>

namespace RED4ext
{
namespace audio { struct WeaponTailOverrides; }

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
    float timeLimitForAutoFireSingleShot; // 128
    uint8_t unk12C[0x130 - 0x12C]; // 12C
    Handle<audio::WeaponTailOverrides> weaponTailOverrides; // 130
};
RED4EXT_ASSERT_SIZE(PlayerWeaponSettings, 0x140);
} // namespace audio
} // namespace RED4ext
