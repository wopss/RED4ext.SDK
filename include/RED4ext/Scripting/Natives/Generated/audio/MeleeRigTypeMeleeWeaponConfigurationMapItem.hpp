#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct MeleeRigTypeMeleeWeaponConfigurationMapItem
{
    static constexpr const char* NAME = "audioMeleeRigTypeMeleeWeaponConfigurationMapItem";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CName meleeWeaponConfiguration; // 08
};
RED4EXT_ASSERT_SIZE(MeleeRigTypeMeleeWeaponConfigurationMapItem, 0x10);
} // namespace audio
using audioMeleeRigTypeMeleeWeaponConfigurationMapItem = audio::MeleeRigTypeMeleeWeaponConfigurationMapItem;
} // namespace RED4ext

// clang-format on
