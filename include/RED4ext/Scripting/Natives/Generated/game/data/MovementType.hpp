#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class MovementType : int32_t
{
    Run = 0,
    Sprint = 1,
    Strafe = 2,
    Walk = 3,
    Count = 4,
    Invalid = 5,
};
} // namespace game::data
using gamedataMovementType = game::data::MovementType;
} // namespace RED4ext

// clang-format on
