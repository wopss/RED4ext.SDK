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
struct MeleeWeaponVariations : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioMeleeWeaponVariations";
    static constexpr const char* ALIAS = NAME;

    CName playerWeaponConfigurationName; // 38
    CName NPCWeaponConfigurationName; // 40
    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MeleeWeaponVariations, 0x58);
} // namespace audio
using audioMeleeWeaponVariations = audio::MeleeWeaponVariations;
} // namespace RED4ext

// clang-format on
