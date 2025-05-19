#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class MeleeAttackDirection : int32_t
{
    Center = 0,
    DownToUp = 1,
    LeftDownToRightUp = 2,
    LeftToRight = 3,
    LeftUpToRightDown = 4,
    RightDownToLeftUp = 5,
    RightToLeft = 6,
    RightUpToLeftDown = 7,
    UpToDown = 8,
    Count = 9,
    Invalid = 10,
};
} // namespace game::data
using gamedataMeleeAttackDirection = game::data::MeleeAttackDirection;
} // namespace RED4ext

// clang-format on
