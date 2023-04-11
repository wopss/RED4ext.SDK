#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/WeaponShellCasingDirection.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/WeaponShellCasingMode.hpp>

namespace RED4ext
{
namespace audio
{
struct WeaponShellCasingSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioWeaponShellCasingSettings";
    static constexpr const char* ALIAS = NAME;

    audio::WeaponShellCasingMode mode; // 38
    audio::WeaponShellCasingDirection direction; // 3C
    CName firstCollisionEventName; // 40
    CName secondCollisionEventName; // 48
    float initialDelay; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(WeaponShellCasingSettings, 0x58);
} // namespace audio
using audioWeaponShellCasingSettings = audio::WeaponShellCasingSettings;
} // namespace RED4ext

// clang-format on
