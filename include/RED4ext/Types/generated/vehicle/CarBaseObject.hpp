#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/vehicle/WheeledBaseObject.hpp>

namespace RED4ext
{
namespace vehicle { 
struct CarBaseObject : vehicle::WheeledBaseObject
{
    static constexpr const char* NAME = "vehicleCarBaseObject";
    static constexpr const char* ALIAS = "CarObject";

    uint8_t unk920[0x970 - 0x920]; // 920
};
RED4EXT_ASSERT_SIZE(CarBaseObject, 0x970);
} // namespace vehicle
using CarObject = vehicle::CarBaseObject;
} // namespace RED4ext
