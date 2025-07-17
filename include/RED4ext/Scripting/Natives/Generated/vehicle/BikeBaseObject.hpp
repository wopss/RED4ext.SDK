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
struct __declspec(align(0x10)) BikeBaseObject : vehicle::WheeledBaseObject
{
    static constexpr const char* NAME = "vehicleBikeBaseObject";
    static constexpr const char* ALIAS = "BikeObject";

};
RED4EXT_ASSERT_SIZE(BikeBaseObject, 0xBF0);
} // namespace vehicle
using vehicleBikeBaseObject = vehicle::BikeBaseObject;
using BikeObject = vehicle::BikeBaseObject;
} // namespace RED4ext

// clang-format on
