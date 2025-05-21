#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::smart {
enum class GunTargetState : int32_t
{
    Visible = 1,
    Targetable = 2,
    Locking = 4,
    Unlocking = 8,
    Locked = 16,
};
} // namespace game::smart
using gamesmartGunTargetState = game::smart::GunTargetState;
} // namespace RED4ext

// clang-format on
