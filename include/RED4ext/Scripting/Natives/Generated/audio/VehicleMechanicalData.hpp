#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio { 
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
    CName acelleration; // 48
    CName speed; // 50
    CName gear; // 58
    CName brake; // 60
    CName rpm; // 68
    CName throttle; // 70
    CName sidewaysThrottle; // 78
    CName thrust; // 80
    CName temperature; // 88
};
RED4EXT_ASSERT_SIZE(VehicleMechanicalData, 0x90);
} // namespace audio
} // namespace RED4ext
