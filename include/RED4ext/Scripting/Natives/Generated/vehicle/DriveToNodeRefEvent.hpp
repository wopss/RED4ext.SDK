#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct DriveToNodeRefEvent : red::Event
{
    static constexpr const char* NAME = "vehicleDriveToNodeRefEvent";
    static constexpr const char* ALIAS = NAME;

    NodeRef targetRef; // 40
    uint8_t unk48[0x4C - 0x48]; // 48
    bool useTraffic; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    float speedInTraffic; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(DriveToNodeRefEvent, 0x58);
} // namespace vehicle
using vehicleDriveToNodeRefEvent = vehicle::DriveToNodeRefEvent;
} // namespace RED4ext

// clang-format on
