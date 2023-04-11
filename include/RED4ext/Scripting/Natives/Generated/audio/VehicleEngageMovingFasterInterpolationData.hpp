#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/ESoundCurveType.hpp>

namespace RED4ext
{
namespace audio
{
struct VehicleEngageMovingFasterInterpolationData
{
    static constexpr const char* NAME = "audioVehicleEngageMovingFasterInterpolationData";
    static constexpr const char* ALIAS = NAME;

    audio::ESoundCurveType enterCurveType; // 00
    float enterCurveTime; // 04
    audio::ESoundCurveType exitCurveType; // 08
    float exitCurveTime; // 0C
};
RED4EXT_ASSERT_SIZE(VehicleEngageMovingFasterInterpolationData, 0x10);
} // namespace audio
using audioVehicleEngageMovingFasterInterpolationData = audio::VehicleEngageMovingFasterInterpolationData;
} // namespace RED4ext

// clang-format on
