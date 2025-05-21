#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world::geometry {
enum class DescriptionQueryStatus : int32_t
{
    OK = 0,
    NoGeometry = 1,
    UpVectorSameAsDirection = 2,
};
} // namespace world::geometry
using worldgeometryDescriptionQueryStatus = world::geometry::DescriptionQueryStatus;
} // namespace RED4ext

// clang-format on
