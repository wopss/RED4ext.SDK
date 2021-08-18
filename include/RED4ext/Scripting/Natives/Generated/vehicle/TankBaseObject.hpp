#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/BaseObject.hpp>

namespace RED4ext
{
namespace vehicle { 
struct TankBaseObject : vehicle::BaseObject
{
    static constexpr const char* NAME = "vehicleTankBaseObject";
    static constexpr const char* ALIAS = "TankObject";

    uint8_t unk900[0x930 - 0x900]; // 900
};
RED4EXT_ASSERT_SIZE(TankBaseObject, 0x930);
} // namespace vehicle
using TankObject = vehicle::TankBaseObject;
} // namespace RED4ext
