#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CombatNodeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct CombatNodeParams_SecondaryWeapon : quest::CombatNodeParams
{
    static constexpr const char* NAME = "questCombatNodeParams_SecondaryWeapon";
    static constexpr const char* ALIAS = NAME;

    bool unEquip; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(CombatNodeParams_SecondaryWeapon, 0x48);
} // namespace quest
using questCombatNodeParams_SecondaryWeapon = quest::CombatNodeParams_SecondaryWeapon;
} // namespace RED4ext

// clang-format on
