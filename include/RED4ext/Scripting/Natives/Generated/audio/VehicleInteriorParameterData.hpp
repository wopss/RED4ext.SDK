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
struct VehicleInteriorParameterData
{
    static constexpr const char* NAME = "audioVehicleInteriorParameterData";
    static constexpr const char* ALIAS = NAME;

    audio::ESoundCurveType enterCurveType; // 00
    float enterCurveTime; // 04
    float enterDelayTime; // 08
    audio::ESoundCurveType exitCurveType; // 0C
    float exitCurveTime; // 10
    float exitDelayTime; // 14
};
RED4EXT_ASSERT_SIZE(VehicleInteriorParameterData, 0x18);
} // namespace audio
using audioVehicleInteriorParameterData = audio::VehicleInteriorParameterData;
} // namespace RED4ext

// clang-format on
