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
struct CinematicCameraToggleEvent : red::Event
{
    static constexpr const char* NAME = "vehicleCinematicCameraToggleEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CinematicCameraToggleEvent, 0x40);
} // namespace vehicle
using vehicleCinematicCameraToggleEvent = vehicle::CinematicCameraToggleEvent;
} // namespace RED4ext

// clang-format on
