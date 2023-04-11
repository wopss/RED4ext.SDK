#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/WeaponSettings.hpp>

namespace RED4ext
{
namespace audio
{
struct NpcWeaponSettings : audio::WeaponSettings
{
    static constexpr const char* NAME = "audioNpcWeaponSettings";
    static constexpr const char* ALIAS = NAME;

    CName gunChoir; // B8
    bool obstructionEnabled; // C0
    bool occlusionEnabled; // C1
    bool repositionEnabled; // C2
    uint8_t unkC3[0xC4 - 0xC3]; // C3
    float obstructionChangeTime; // C4
    float voiceSwitchCooldown; // C8
    bool disablePathfinding; // CC
    uint8_t unkCD[0xD8 - 0xCD]; // CD
    CName tails; // D8
    CName reloadSound; // E0
    CName quickMeleeAttackSound; // E8
    CName quickMeleeHitSound; // F0
};
RED4EXT_ASSERT_SIZE(NpcWeaponSettings, 0xF8);
} // namespace audio
using audioNpcWeaponSettings = audio::NpcWeaponSettings;
} // namespace RED4ext

// clang-format on
