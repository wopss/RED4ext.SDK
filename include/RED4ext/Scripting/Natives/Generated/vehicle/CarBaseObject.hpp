#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/WheeledBaseObject.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) CarBaseObject : vehicle::WheeledBaseObject
{
    static constexpr const char* NAME = "vehicleCarBaseObject";
    static constexpr const char* ALIAS = "CarObject";

    uint8_t unkBE0[0xC30 - 0xBE0]; // BE0
};
RED4EXT_ASSERT_SIZE(CarBaseObject, 0xC30);
} // namespace vehicle
using vehicleCarBaseObject = vehicle::CarBaseObject;
using CarObject = vehicle::CarBaseObject;
} // namespace RED4ext

// clang-format on
