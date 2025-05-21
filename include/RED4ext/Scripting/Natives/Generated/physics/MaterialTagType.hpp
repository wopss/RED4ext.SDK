#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace physics {
enum class MaterialTagType : int8_t
{
    AIVisibility = 0,
    PlayerVisibility = 1,
    ProjectilePenetration = 2,
    ProjectileRicochet = 3,
    VehicleTraction = 4,
};
} // namespace physics
using physicsMaterialTagType = physics::MaterialTagType;
} // namespace RED4ext

// clang-format on
