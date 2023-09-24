#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace garment
{
struct SmoothingParams
{
    static constexpr const char* NAME = "garmentSmoothingParams";
    static constexpr const char* ALIAS = NAME;

    float smoothingStrength; // 00
    float smoothingRadiusInCM; // 04
    float smoothingExponent; // 08
    uint32_t smoothingNumNeighbours; // 0C
    bool smoothNormalsEnabled; // 10
    uint8_t unk11[0x14 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(SmoothingParams, 0x14);
} // namespace garment
using garmentSmoothingParams = garment::SmoothingParams;
} // namespace RED4ext

// clang-format on
