#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world::geometry {
enum class DescriptionQueryFlags : int32_t
{
    DistanceVector = 1,
    CollisionNormal = 2,
    ObstacleDepth = 4,
    UpExtent = 8,
    DownExtent = 16,
    TopExtent = 32,
    TopPoint = 64,
    BehindPoint = 128,
};
} // namespace world::geometry
using worldgeometryDescriptionQueryFlags = world::geometry::DescriptionQueryFlags;
} // namespace RED4ext

// clang-format on
