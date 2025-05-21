#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace anim {
enum class EMotionExtractionCompressionType : int32_t
{
    EMECT_UNCOMPRESSED = 0,
    EMECT_SPLINE_MID = 2,
    EMECT_UNCOMPRESSED_ALL_ANGLES = 3,
    EMECT_SPLINE_LOW = 4,
    EMECT_SPLINE_HIGH = 5,
    EMECT_LINEAR = 6,
    EMECT_UNCOMPRESSED_2D = 7,
    EMECT_UNCOMPRESSED_3D_FALLBACKING = 8,
    EMECT_UNCOMPRESSED_ALL_ANGLES_FALLBACKING = 9,
};
} // namespace anim
using animEMotionExtractionCompressionType = anim::EMotionExtractionCompressionType;
} // namespace RED4ext

// clang-format on
