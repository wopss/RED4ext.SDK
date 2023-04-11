#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CombatNodeParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SwitchWeaponModes.hpp>

namespace RED4ext
{
namespace quest
{
struct CombatNodeParams_SwitchWeapon : quest::CombatNodeParams
{
    static constexpr const char* NAME = "questCombatNodeParams_SwitchWeapon";
    static constexpr const char* ALIAS = NAME;

    quest::SwitchWeaponModes mode; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(CombatNodeParams_SwitchWeapon, 0x48);
} // namespace quest
using questCombatNodeParams_SwitchWeapon = quest::CombatNodeParams_SwitchWeapon;
} // namespace RED4ext

// clang-format on
