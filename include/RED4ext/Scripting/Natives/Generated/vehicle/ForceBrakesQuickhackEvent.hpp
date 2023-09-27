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
struct ForceBrakesQuickhackEvent : game::ActionEvent
{
    static constexpr const char* NAME = "vehicleForceBrakesQuickhackEvent";
    static constexpr const char* ALIAS = "VehicleForceBrakesQuickhackEvent";

    float alarmDuration; // 68
    bool active; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
};
RED4EXT_ASSERT_SIZE(ForceBrakesQuickhackEvent, 0x70);
} // namespace vehicle
using vehicleForceBrakesQuickhackEvent = vehicle::ForceBrakesQuickhackEvent;
using VehicleForceBrakesQuickhackEvent = vehicle::ForceBrakesQuickhackEvent;
} // namespace RED4ext

// clang-format on
