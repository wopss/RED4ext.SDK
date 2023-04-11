#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/CameraPerspective.hpp>

namespace RED4ext
{
namespace vehicle
{
struct RequestCameraPerspectiveEvent : red::Event
{
    static constexpr const char* NAME = "vehicleRequestCameraPerspectiveEvent";
    static constexpr const char* ALIAS = NAME;

    vehicle::CameraPerspective cameraPerspective; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(RequestCameraPerspectiveEvent, 0x48);
} // namespace vehicle
using vehicleRequestCameraPerspectiveEvent = vehicle::RequestCameraPerspectiveEvent;
} // namespace RED4ext

// clang-format on
