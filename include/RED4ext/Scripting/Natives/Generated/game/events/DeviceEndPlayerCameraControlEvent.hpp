#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events { 
struct DeviceEndPlayerCameraControlEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsDeviceEndPlayerCameraControlEvent";
    static constexpr const char* ALIAS = "DeviceEndPlayerCameraControlEvent";

};
RED4EXT_ASSERT_SIZE(DeviceEndPlayerCameraControlEvent, 0x40);
} // namespace game::events
using DeviceEndPlayerCameraControlEvent = game::events::DeviceEndPlayerCameraControlEvent;
} // namespace RED4ext
