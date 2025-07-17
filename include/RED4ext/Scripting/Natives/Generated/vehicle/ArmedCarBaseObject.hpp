#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/CarBaseObject.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) ArmedCarBaseObject : vehicle::CarBaseObject
{
    static constexpr const char* NAME = "vehicleArmedCarBaseObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkC40[0xD00 - 0xC40]; // C40
};
RED4EXT_ASSERT_SIZE(ArmedCarBaseObject, 0xD00);
} // namespace vehicle
using vehicleArmedCarBaseObject = vehicle::ArmedCarBaseObject;
} // namespace RED4ext

// clang-format on
