#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace audio
{
struct LocomotionWaterContextSettings
{
    static constexpr const char* NAME = "audioLocomotionWaterContextSettings";
    static constexpr const char* ALIAS = NAME;

    float minDistanceBetweenImpulsesSquared; // 00
    float impulseStrength; // 04
    float impulseMinRadius; // 08
    float impulseMaxRadius; // 0C
};
RED4EXT_ASSERT_SIZE(LocomotionWaterContextSettings, 0x10);
} // namespace audio
using audioLocomotionWaterContextSettings = audio::LocomotionWaterContextSettings;
} // namespace RED4ext

// clang-format on
