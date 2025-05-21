#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
enum class SAnimationBufferDataCompressionMethod : int32_t
{
    ABDCM_Invalid = 0,
    ABDCM_Plain = 1,
    ABDCM_Quaternion = 2,
    ABDCM_QuaternionXYZSignedW = 3,
    ABDCM_QuaternionXYZSignedWLastBit = 4,
    ABDCM_Quaternion48b = 5,
    ABDCM_Quaternion40b = 6,
    ABDCM_Quaternion32b = 7,
    ABDCM_Quaternion64bW = 8,
    ABDCM_Quaternion48bW = 9,
    ABDCM_Quaternion40bW = 10,
};
} // namespace RED4ext

// clang-format on
