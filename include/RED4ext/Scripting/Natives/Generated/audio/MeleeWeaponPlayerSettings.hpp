#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeWeaponSettings.hpp>

namespace RED4ext
{
namespace audio { 
struct MeleeWeaponPlayerSettings : audio::MeleeWeaponSettings
{
    static constexpr const char* NAME = "audioMeleeWeaponPlayerSettings";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MeleeWeaponPlayerSettings, 0x90);
} // namespace audio
} // namespace RED4ext
