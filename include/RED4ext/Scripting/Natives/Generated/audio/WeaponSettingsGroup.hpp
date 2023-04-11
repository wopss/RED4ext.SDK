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
struct WeaponSettingsGroup : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioWeaponSettingsGroup";
    static constexpr const char* ALIAS = NAME;

    CName playerSettings; // 38
    CName npcSettings; // 40
    CName playerSilenced; // 48
    CName npcSilenced; // 50
    uint8_t unk58[0x78 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(WeaponSettingsGroup, 0x78);
} // namespace audio
using audioWeaponSettingsGroup = audio::WeaponSettingsGroup;
} // namespace RED4ext

// clang-format on
