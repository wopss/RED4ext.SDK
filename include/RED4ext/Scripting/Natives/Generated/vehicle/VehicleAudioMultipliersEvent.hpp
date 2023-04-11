#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleMultipliers.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct VehicleAudioMultipliersEvent : red::Event
{
    static constexpr const char* NAME = "vehicleVehicleAudioMultipliersEvent";
    static constexpr const char* ALIAS = NAME;

    audio::VehicleMultipliers multipliers; // 40
};
RED4EXT_ASSERT_SIZE(VehicleAudioMultipliersEvent, 0x48);
} // namespace vehicle
using vehicleVehicleAudioMultipliersEvent = vehicle::VehicleAudioMultipliersEvent;
} // namespace RED4ext

// clang-format on
