#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/BaseObject.hpp>

namespace RED4ext
{
namespace vehicle { 
struct WheeledBaseObject : vehicle::BaseObject
{
    static constexpr const char* NAME = "vehicleWheeledBaseObject";
    static constexpr const char* ALIAS = "WheeledObject";

    uint8_t unk910[0x930 - 0x910]; // 910
};
RED4EXT_ASSERT_SIZE(WheeledBaseObject, 0x930);
} // namespace vehicle
using WheeledObject = vehicle::WheeledBaseObject;
} // namespace RED4ext
