#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
enum class SAnimationBufferOrientationCompressionMethod : int32_t
{
    ABOCM_PackIn64bitsW = 0,
    ABOCM_PackIn48bitsW = 1,
    ABOCM_PackIn40bitsW = 2,
    ABOCM_AsFloat_XYZW = 3,
    ABOCM_AsFloat_XYZSignedW = 4,
    ABOCM_AsFloat_XYZSignedWInLastBit = 5,
    ABOCM_PackIn48bits = 6,
    ABOCM_PackIn40bits = 7,
    ABOCM_PackIn32bits = 8,
};
} // namespace RED4ext

// clang-format on
