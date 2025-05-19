#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class FxAction : int32_t
{
    EnterCharge = 0,
    EnterDischarge = 1,
    EnterLowAmmo = 2,
    EnterNoAmmo = 3,
    EnterOverheat = 4,
    EnterReload = 5,
    ExitCharge = 6,
    ExitDischarge = 7,
    ExitLowAmmo = 8,
    ExitNoAmmo = 9,
    ExitOverheat = 10,
    ExitReload = 11,
    ExitShoot = 12,
    MeleeBlock = 13,
    MeleeHit = 14,
    MuzzleBrakeShoot = 15,
    Shoot = 16,
    SilencedShoot = 17,
    Count = 18,
    Invalid = 19,
};
} // namespace game::data
using gamedataFxAction = game::data::FxAction;
} // namespace RED4ext

// clang-format on
