#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/AudioEventAction.hpp>

namespace RED4ext
{
namespace vehicle
{
struct AudioEvent : red::Event
{
    static constexpr const char* NAME = "vehicleAudioEvent";
    static constexpr const char* ALIAS = "VehicleAudioEvent";

    vehicle::AudioEventAction action; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AudioEvent, 0x48);
} // namespace vehicle
using vehicleAudioEvent = vehicle::AudioEvent;
using VehicleAudioEvent = vehicle::AudioEvent;
} // namespace RED4ext

// clang-format on
