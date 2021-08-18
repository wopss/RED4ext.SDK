#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace garment { 
struct SmoothingParams
{
    static constexpr const char* NAME = "garmentSmoothingParams";
    static constexpr const char* ALIAS = NAME;

    float smoothingStrength; // 00
    float smoothingRadiusInCM; // 04
    float smoothingExponent; // 08
    uint32_t smoothingNumNeighbours; // 0C
};
RED4EXT_ASSERT_SIZE(SmoothingParams, 0x10);
} // namespace garment
} // namespace RED4ext
