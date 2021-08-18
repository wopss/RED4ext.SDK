#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { 
struct WeaponTailSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioWeaponTailSettings";
    static constexpr const char* ALIAS = NAME;

    CName interiorDefault; // 38
    CName interiorWide; // 40
    CName exteriorWide; // 48
    CName exteriorUrbanNarrow; // 50
    CName exteriorUrbanStreet; // 58
    CName exteriorUrbanStreetWide; // 60
    CName exteriorUrbanOpen; // 68
    CName exteriorUrbanEnclosed; // 70
    CName exteriorBadlandsOpen; // 78
    CName exteriorBadlandsCanyon; // 80
};
RED4EXT_ASSERT_SIZE(WeaponTailSettings, 0x88);
} // namespace audio
} // namespace RED4ext
