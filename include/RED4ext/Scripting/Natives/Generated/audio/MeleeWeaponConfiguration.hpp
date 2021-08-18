#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeRigTypeMeleeWeaponConfigurationMap.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeSound.hpp>

namespace RED4ext
{
namespace audio { struct MeleeHitTypeMeleeSoundDictionary; }

namespace audio { 
struct MeleeWeaponConfiguration : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioMeleeWeaponConfiguration";
    static constexpr const char* ALIAS = NAME;

    audio::MeleeSound fastWhoosh; // 38
    audio::MeleeSound normalWhoosh; // 48
    audio::MeleeSound slowWhoosh; // 58
    audio::MeleeSound detailSound; // 68
    audio::MeleeSound handlingSound; // 78
    audio::MeleeSound equipSound; // 88
    audio::MeleeSound unequipSound; // 98
    audio::MeleeSound blockSound; // A8
    audio::MeleeSound parrySound; // B8
    Handle<audio::MeleeHitTypeMeleeSoundDictionary> meleeSoundsByHitPerMaterialType; // C8
    audio::MeleeRigTypeMeleeWeaponConfigurationMap meleeWeaponConfigurationsByRigTypeMap; // D8
};
RED4EXT_ASSERT_SIZE(MeleeWeaponConfiguration, 0xE8);
} // namespace audio
} // namespace RED4ext
