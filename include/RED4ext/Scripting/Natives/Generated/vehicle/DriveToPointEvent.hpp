#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct DriveToPointEvent : red::Event
{
    static constexpr const char* NAME = "vehicleDriveToPointEvent";
    static constexpr const char* ALIAS = NAME;

    Vector3 targetPos; // 40
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    bool useTraffic; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    float speedInTraffic; // 54
};
RED4EXT_ASSERT_SIZE(DriveToPointEvent, 0x58);
} // namespace vehicle
using vehicleDriveToPointEvent = vehicle::DriveToPointEvent;
} // namespace RED4ext

// clang-format on
