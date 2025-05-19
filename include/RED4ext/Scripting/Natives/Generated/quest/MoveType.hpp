#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace quest {
enum class MoveType : int32_t
{
    MoveOnSpline = 0,
    MoveTo = 1,
    RotateTo = 2,
    Patrol = 3,
    Follow = 4,
    JoinCrowd = 5,
};
} // namespace quest
using questMoveType = quest::MoveType;
} // namespace RED4ext

// clang-format on
