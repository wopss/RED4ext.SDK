#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/BaseObject.hpp>

namespace RED4ext
{
namespace vehicle { 
struct AVBaseObject : vehicle::BaseObject
{
    static constexpr const char* NAME = "vehicleAVBaseObject";
    static constexpr const char* ALIAS = "AVObject";

};
RED4EXT_ASSERT_SIZE(AVBaseObject, 0x980);
} // namespace vehicle
using AVObject = vehicle::AVBaseObject;
} // namespace RED4ext
