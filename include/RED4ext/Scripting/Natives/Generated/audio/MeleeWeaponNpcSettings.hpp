#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeWeaponSettings.hpp>

namespace RED4ext
{
namespace audio
{
struct MeleeWeaponNpcSettings : audio::MeleeWeaponSettings
{
    static constexpr const char* NAME = "audioMeleeWeaponNpcSettings";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MeleeWeaponNpcSettings, 0x90);
} // namespace audio
using audioMeleeWeaponNpcSettings = audio::MeleeWeaponNpcSettings;
} // namespace RED4ext

// clang-format on
