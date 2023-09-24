#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace vehicle { struct AudioVehicleCurveSet; }

namespace vehicle
{
struct AudioCurvesParam : IScriptable
{
    static constexpr const char* NAME = "vehicleAudioCurvesParam";
    static constexpr const char* ALIAS = NAME;

    Ref<vehicle::AudioVehicleCurveSet> audioCurves; // 40
};
RED4EXT_ASSERT_SIZE(AudioCurvesParam, 0x58);
} // namespace vehicle
using vehicleAudioCurvesParam = vehicle::AudioCurvesParam;
} // namespace RED4ext

// clang-format on
