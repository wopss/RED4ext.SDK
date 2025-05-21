#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace scn {
enum class PuppetVehicleState : int8_t
{
    IdleMounted = 0,
    IdleStand = 1,
    CombatWindowed = 2,
    CombatSeated = 3,
    Turret = 4,
    GunnerSlot = 5,
};
} // namespace scn
using scnPuppetVehicleState = scn::PuppetVehicleState;
} // namespace RED4ext

// clang-format on
