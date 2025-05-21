#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class DefenseMode : int32_t
{
    DefendAll = 0,
    DefendMelee = 1,
    DefendRanged = 2,
    NoDefend = 3,
    Count = 4,
    Invalid = 5,
};
} // namespace game::data
using gamedataDefenseMode = game::data::DefenseMode;
} // namespace RED4ext

// clang-format on
