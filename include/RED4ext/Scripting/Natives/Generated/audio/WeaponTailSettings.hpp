#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct WeaponTailSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioWeaponTailSettings";
    static constexpr const char* ALIAS = NAME;

    CName interiorDefault; // 38
    CName interiorWide; // 40
    CName interiorCar; // 48
    CName exteriorWide; // 50
    CName exteriorUrbanNarrow; // 58
    CName exteriorUrbanStreet; // 60
    CName exteriorUrbanStreetWide; // 68
    CName exteriorUrbanOpen; // 70
    CName exteriorUrbanEnclosed; // 78
    CName exteriorBadlandsOpen; // 80
    CName exteriorBadlandsCanyon; // 88
};
RED4EXT_ASSERT_SIZE(WeaponTailSettings, 0x90);
} // namespace audio
using audioWeaponTailSettings = audio::WeaponTailSettings;
} // namespace RED4ext

// clang-format on
