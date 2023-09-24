#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionEvent.hpp>

namespace RED4ext
{
namespace vehicle
{
struct AccelerateQuickhackEvent : game::ActionEvent
{
    static constexpr const char* NAME = "vehicleAccelerateQuickhackEvent";
    static constexpr const char* ALIAS = "VehicleAccelerateQuickhackEvent";

    bool active; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(AccelerateQuickhackEvent, 0x70);
} // namespace vehicle
using vehicleAccelerateQuickhackEvent = vehicle::AccelerateQuickhackEvent;
using VehicleAccelerateQuickhackEvent = vehicle::AccelerateQuickhackEvent;
} // namespace RED4ext

// clang-format on
