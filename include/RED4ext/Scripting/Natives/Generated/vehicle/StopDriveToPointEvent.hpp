#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle { 
struct StopDriveToPointEvent : red::Event
{
    static constexpr const char* NAME = "vehicleStopDriveToPointEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StopDriveToPointEvent, 0x40);
} // namespace vehicle
} // namespace RED4ext
