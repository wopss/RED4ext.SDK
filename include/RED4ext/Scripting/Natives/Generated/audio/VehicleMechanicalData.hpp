#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct VehicleMechanicalData
{
    static constexpr const char* NAME = "audioVehicleMechanicalData";
    static constexpr const char* ALIAS = NAME;

    CName engineStartEvent; // 00
    CName engineStopEvent; // 08
    CName gearUpBeginEvent; // 10
    CName gearUpEndEvent; // 18
    CName gearDownBeginEvent; // 20
    CName gearDownEndEvent; // 28
    CName throttleOnEvent; // 30
    CName throttleOffEvent; // 38
    CName suspensionSqueekEvent; // 40
    CName fullThrottleAppliedEvent; // 48
    CName acelleration; // 50
    CName speed; // 58
    CName gear; // 60
    CName brake; // 68
    CName rpm; // 70
    CName throttle; // 78
    CName sidewaysThrottle; // 80
    CName thrust; // 88
    CName temperature; // 90
};
RED4EXT_ASSERT_SIZE(VehicleMechanicalData, 0x98);
} // namespace audio
using audioVehicleMechanicalData = audio::VehicleMechanicalData;
} // namespace RED4ext

// clang-format on
