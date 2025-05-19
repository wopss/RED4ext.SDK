#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace physics {
enum class ShapeType : int8_t
{
    Box = 0,
    Sphere = 1,
    Capsule = 2,
    ConvexMesh = 3,
    TriangleMesh = 4,
    Invalid = 6,
};
} // namespace physics
using physicsShapeType = physics::ShapeType;
} // namespace RED4ext

// clang-format on
