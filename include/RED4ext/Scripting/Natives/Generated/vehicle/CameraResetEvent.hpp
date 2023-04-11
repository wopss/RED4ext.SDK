#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct CameraResetEvent : red::Event
{
    static constexpr const char* NAME = "vehicleCameraResetEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CameraResetEvent, 0x40);
} // namespace vehicle
using vehicleCameraResetEvent = vehicle::CameraResetEvent;
} // namespace RED4ext

// clang-format on
