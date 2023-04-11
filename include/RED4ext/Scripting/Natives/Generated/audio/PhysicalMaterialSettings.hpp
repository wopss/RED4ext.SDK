#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MaterialHardnessOverride.hpp>

namespace RED4ext
{
namespace audio
{
struct PhysicalMaterialSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioPhysicalMaterialSettings";
    static constexpr const char* ALIAS = NAME;

    CName softImpact; // 38
    CName solidImpact; // 40
    CName hardImpact; // 48
    bool useFoliageSystem; // 50
    bool enableRollingOrScraping; // 51
    uint8_t unk52[0x58 - 0x52]; // 52
    CName scrape; // 58
    CName roll; // 60
    CName bulletImpact; // 68
    CName bulletImpactSniper; // 70
    CName bulletImpactShotgun; // 78
    CName bulletImpactRail; // 80
    CName bulletImpactNpc; // 88
    CName bulletImpactNpcSniper; // 90
    CName bulletImpactNpcAuto; // 98
    CName bulletImpactNpcShotgun; // A0
    CName bulletImpactNpcRail; // A8
    audio::MaterialHardnessOverride materialHardnessOverride; // B0
    bool collideOnlyOnce; // B4
    uint8_t unkB5[0xB8 - 0xB5]; // B5
};
RED4EXT_ASSERT_SIZE(PhysicalMaterialSettings, 0xB8);
} // namespace audio
using audioPhysicalMaterialSettings = audio::PhysicalMaterialSettings;
} // namespace RED4ext

// clang-format on
