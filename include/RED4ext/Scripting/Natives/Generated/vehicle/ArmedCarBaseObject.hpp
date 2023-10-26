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

    uint8_t unkC30[0xCF0 - 0xC30]; // C30
};
RED4EXT_ASSERT_SIZE(ArmedCarBaseObject, 0xCF0);
} // namespace vehicle
using vehicleArmedCarBaseObject = vehicle::ArmedCarBaseObject;
} // namespace RED4ext

// clang-format on
