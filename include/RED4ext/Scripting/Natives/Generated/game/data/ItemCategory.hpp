#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class ItemCategory : int32_t
{
    Clothing = 0,
    Consumable = 1,
    Cyberware = 2,
    Gadget = 3,
    General = 4,
    Part = 5,
    Weapon = 6,
    WeaponMod = 7,
    Count = 8,
    Invalid = 9,
};
} // namespace game::data
using gamedataItemCategory = game::data::ItemCategory;
} // namespace RED4ext

// clang-format on
