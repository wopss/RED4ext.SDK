#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterEquippedWeapon_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterEquippedWeapon_ConditionType";
    static constexpr const char* ALIAS = NAME;

    bool anyWeaponEquipped; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    CString weaponID; // 80
    CName weaponTag; // A0
    bool inverted; // A8
    uint8_t unkA9[0xB0 - 0xA9]; // A9
};
RED4EXT_ASSERT_SIZE(CharacterEquippedWeapon_ConditionType, 0xB0);
} // namespace quest
using questCharacterEquippedWeapon_ConditionType = quest::CharacterEquippedWeapon_ConditionType;
} // namespace RED4ext

// clang-format on
