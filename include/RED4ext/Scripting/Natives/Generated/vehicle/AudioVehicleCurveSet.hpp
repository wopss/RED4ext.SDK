#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CurveSet.hpp>

namespace RED4ext
{
namespace vehicle
{
struct AudioVehicleCurveSet : CurveSet
{
    static constexpr const char* NAME = "vehicleAudioVehicleCurveSet";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AudioVehicleCurveSet, 0x50);
} // namespace vehicle
using vehicleAudioVehicleCurveSet = vehicle::AudioVehicleCurveSet;
} // namespace RED4ext

// clang-format on
