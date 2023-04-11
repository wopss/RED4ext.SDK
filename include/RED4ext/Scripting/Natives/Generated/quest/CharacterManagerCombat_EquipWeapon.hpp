#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerCombat_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerCombat_EquipWeapon : quest::ICharacterManagerCombat_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerCombat_EquipWeapon";
    static constexpr const char* ALIAS = NAME;

    bool equip; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    TweakDBID weaponID; // 74
    TweakDBID slotID; // 7C
    bool forceFirstEquip; // 84
    bool equipLastWeapon; // 85
    bool instant; // 86
    bool ignoreStateMachine; // 87
};
RED4EXT_ASSERT_SIZE(CharacterManagerCombat_EquipWeapon, 0x88);
} // namespace quest
using questCharacterManagerCombat_EquipWeapon = quest::CharacterManagerCombat_EquipWeapon;
} // namespace RED4ext

// clang-format on
