#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/vehicle/BaseObject.hpp>

namespace RED4ext
{
namespace vehicle { 
struct WheeledBaseObject : vehicle::BaseObject
{
    static constexpr const char* NAME = "vehicleWheeledBaseObject";
    static constexpr const char* ALIAS = "WheeledObject";

    uint8_t unk8F0[0x910 - 0x8F0]; // 8F0
};
RED4EXT_ASSERT_SIZE(WheeledBaseObject, 0x910);
} // namespace vehicle
using WheeledObject = vehicle::WheeledBaseObject;
} // namespace RED4ext
