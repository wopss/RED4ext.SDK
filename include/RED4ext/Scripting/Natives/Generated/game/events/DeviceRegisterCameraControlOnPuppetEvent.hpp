#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct DeviceCameraControlComponent; }

namespace game::events
{
struct DeviceRegisterCameraControlOnPuppetEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsDeviceRegisterCameraControlOnPuppetEvent";
    static constexpr const char* ALIAS = NAME;

    Handle<game::DeviceCameraControlComponent> component; // 40
    bool register_; // 50 -- register
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(DeviceRegisterCameraControlOnPuppetEvent, 0x58);
} // namespace game::events
using gameeventsDeviceRegisterCameraControlOnPuppetEvent = game::events::DeviceRegisterCameraControlOnPuppetEvent;
} // namespace RED4ext

// clang-format on
