#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class ItemUnequipContexts : int32_t
{
    AllWeapons = 0,
    HeadClothing = 1,
    FaceClothing = 2,
    OuterChestClothing = 3,
    InnerChestClothing = 4,
    LegClothing = 5,
    FootClothing = 6,
    AllClothing = 7,
    RightHandWeapon = 8,
    LeftHandWeapon = 9,
    AllQuestItems = 10,
    AllItems = 11,
};
} // namespace game
using gameItemUnequipContexts = game::ItemUnequipContexts;
} // namespace RED4ext

// clang-format on
