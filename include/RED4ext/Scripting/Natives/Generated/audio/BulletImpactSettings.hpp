#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EntitySettings.hpp>

namespace RED4ext
{
namespace audio
{
struct BulletImpactSettings : audio::EntitySettings
{
    static constexpr const char* NAME = "audioBulletImpactSettings";
    static constexpr const char* ALIAS = NAME;

    CName lowImpactSound; // 88
    CName medImpactSound; // 90
    CName hiImpactSound; // 98
    CName critImpactSound; // A0
    CName npcImpactSound; // A8
    float mediumDamageDistance; // B0
    float highDamageDistance; // B4
};
RED4EXT_ASSERT_SIZE(BulletImpactSettings, 0xB8);
} // namespace audio
using audioBulletImpactSettings = audio::BulletImpactSettings;
} // namespace RED4ext

// clang-format on
