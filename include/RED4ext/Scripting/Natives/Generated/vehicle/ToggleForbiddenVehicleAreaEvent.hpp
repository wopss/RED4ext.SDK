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
struct ToggleForbiddenVehicleAreaEvent : red::Event
{
    static constexpr const char* NAME = "vehicleToggleForbiddenVehicleAreaEvent";
    static constexpr const char* ALIAS = "ToggleForbiddenVehicleAreaEvent";

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ToggleForbiddenVehicleAreaEvent, 0x58);
} // namespace vehicle
using vehicleToggleForbiddenVehicleAreaEvent = vehicle::ToggleForbiddenVehicleAreaEvent;
using ToggleForbiddenVehicleAreaEvent = vehicle::ToggleForbiddenVehicleAreaEvent;
} // namespace RED4ext

// clang-format on
