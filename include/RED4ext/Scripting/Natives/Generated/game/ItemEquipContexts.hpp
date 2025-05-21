#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class ItemEquipContexts : int32_t
{
    LastWeaponEquipped = 0,
    LastUsedMeleeWeapon = 1,
    LastUsedRangedWeapon = 2,
    Gadget = 3,
    MeleeCyberware = 4,
    LauncherCyberware = 5,
    Fists = 6,
    TutorialCyberware = 7,
};
} // namespace game
using gameItemEquipContexts = game::ItemEquipContexts;
} // namespace RED4ext

// clang-format on
