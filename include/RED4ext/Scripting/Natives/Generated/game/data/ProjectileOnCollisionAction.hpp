#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class ProjectileOnCollisionAction : int32_t
{
    Bounce = 0,
    Pierce = 1,
    Stop = 2,
    StopAndStick = 3,
    StopAndStickPerpendicular = 4,
    Count = 5,
    Invalid = 6,
};
} // namespace game::data
using gamedataProjectileOnCollisionAction = game::data::ProjectileOnCollisionAction;
} // namespace RED4ext

// clang-format on
