#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace physics {
enum class StaticCollisionShapeCategory : int32_t
{
    Interior = 0,
    Exterior = 1,
    Architecture = 2,
    Decoration = 3,
    Other = 4,
};
} // namespace physics
using physicsStaticCollisionShapeCategory = physics::StaticCollisionShapeCategory;
} // namespace RED4ext

// clang-format on
