#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class PlayerStateMachine : int32_t
{
    Locomotion = 0,
    UpperBody = 1,
    Weapon = 2,
    HighLevel = 3,
    Projectile = 4,
    Vision = 5,
    TimeDilation = 6,
    CoverAction = 7,
    IconicItem = 8,
    Combat = 9,
    Vehicle = 10,
    Takedown = 11,
};
} // namespace game
using gamePlayerStateMachine = game::PlayerStateMachine;
} // namespace RED4ext

// clang-format on
