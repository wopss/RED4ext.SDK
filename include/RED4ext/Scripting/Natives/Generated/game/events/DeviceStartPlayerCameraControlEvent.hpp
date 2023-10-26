#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::events
{
struct __declspec(align(0x10)) DeviceStartPlayerCameraControlEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsDeviceStartPlayerCameraControlEvent";
    static constexpr const char* ALIAS = "DeviceStartPlayerCameraControlEvent";

    WeakHandle<game::Object> playerController; // 40
    Vector4 initialRotation; // 50
    float minYaw; // 60
    float maxYaw; // 64
    float minPitch; // 68
    float maxPitch; // 6C
};
RED4EXT_ASSERT_SIZE(DeviceStartPlayerCameraControlEvent, 0x70);
} // namespace game::events
using gameeventsDeviceStartPlayerCameraControlEvent = game::events::DeviceStartPlayerCameraControlEvent;
using DeviceStartPlayerCameraControlEvent = game::events::DeviceStartPlayerCameraControlEvent;
} // namespace RED4ext

// clang-format on
