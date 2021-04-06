#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/vehicle/WheeledBaseObject.hpp>

namespace RED4ext
{
namespace vehicle { 
struct BikeBaseObject : vehicle::WheeledBaseObject
{
    static constexpr const char* NAME = "vehicleBikeBaseObject";
    static constexpr const char* ALIAS = "BikeObject";

};
RED4EXT_ASSERT_SIZE(BikeBaseObject, 0x920);
} // namespace vehicle
using BikeObject = vehicle::BikeBaseObject;
} // namespace RED4ext
