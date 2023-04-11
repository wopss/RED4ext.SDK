#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/FlybySettings.hpp>

namespace RED4ext
{
namespace audio
{
struct WeaponAmmoSettingsMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioWeaponAmmoSettingsMap";
    static constexpr const char* ALIAS = NAME;

    float flybyMinDistance; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    audio::FlybySettings standardFlyby; // 40
    audio::FlybySettings sniperFlyby; // 50
    audio::FlybySettings shotFlyby; // 60
    audio::FlybySettings railFlyby; // 70
    audio::FlybySettings automaticFlyby; // 80
    audio::FlybySettings smartFlyby; // 90
    audio::FlybySettings smartSniperFlyby; // A0
    audio::FlybySettings hmgFlyby; // B0
};
RED4EXT_ASSERT_SIZE(WeaponAmmoSettingsMap, 0xC0);
} // namespace audio
using audioWeaponAmmoSettingsMap = audio::WeaponAmmoSettingsMap;
} // namespace RED4ext

// clang-format on
