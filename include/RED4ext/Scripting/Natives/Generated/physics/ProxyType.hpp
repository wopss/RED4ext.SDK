#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace physics {
enum class ProxyType : int8_t
{
    Invalid = 0,
    PhysicalSystem = 1,
    CharacterController = 2,
    Destruction = 3,
    ParticleSystem = 4,
    Trigger = 5,
    Cloth = 6,
    WorldCollision = 7,
    Terrain = 8,
    SimpleCollider = 9,
    AggregateSystem = 10,
    CharacterObstacle = 11,
    Ragdoll = 12,
    FoliageDestruction = 13,
};
} // namespace physics
using physicsProxyType = physics::ProxyType;
} // namespace RED4ext

// clang-format on
