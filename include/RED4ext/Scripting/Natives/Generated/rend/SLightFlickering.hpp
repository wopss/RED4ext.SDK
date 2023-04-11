#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace rend
{
struct SLightFlickering
{
    static constexpr const char* NAME = "rendSLightFlickering";
    static constexpr const char* ALIAS = NAME;

    float positionOffset; // 00
    float flickerStrength; // 04
    float flickerPeriod; // 08
};
RED4EXT_ASSERT_SIZE(SLightFlickering, 0xC);
} // namespace rend
using rendSLightFlickering = rend::SLightFlickering;
} // namespace RED4ext

// clang-format on
