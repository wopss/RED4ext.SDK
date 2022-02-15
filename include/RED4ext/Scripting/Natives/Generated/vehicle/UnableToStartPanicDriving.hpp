#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle { 
struct UnableToStartPanicDriving : red::Event
{
    static constexpr const char* NAME = "vehicleUnableToStartPanicDriving";
    static constexpr const char* ALIAS = "VehicleUnableToStartPanicDriving";

};
RED4EXT_ASSERT_SIZE(UnableToStartPanicDriving, 0x40);
} // namespace vehicle
using VehicleUnableToStartPanicDriving = vehicle::UnableToStartPanicDriving;
} // namespace RED4ext
