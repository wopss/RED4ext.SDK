#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class EStatFlags : int32_t
{
    Bool = 1,
    EquipOnPlayer = 2,
    EquipOnNPC = 4,
    ExcludeRootCombination = 8,
};
} // namespace game
using gameEStatFlags = game::EStatFlags;
} // namespace RED4ext

// clang-format on
