#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeRigTypeMeleeWeaponConfigurationMapItem.hpp>

namespace RED4ext
{
namespace audio
{
struct MeleeRigTypeMeleeWeaponConfigurationMap
{
    static constexpr const char* NAME = "audioMeleeRigTypeMeleeWeaponConfigurationMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::MeleeRigTypeMeleeWeaponConfigurationMapItem> mapItems; // 00
};
RED4EXT_ASSERT_SIZE(MeleeRigTypeMeleeWeaponConfigurationMap, 0x10);
} // namespace audio
using audioMeleeRigTypeMeleeWeaponConfigurationMap = audio::MeleeRigTypeMeleeWeaponConfigurationMap;
} // namespace RED4ext

// clang-format on
