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
struct DriveFollowSplineEvent : red::Event
{
    static constexpr const char* NAME = "vehicleDriveFollowSplineEvent";
    static constexpr const char* ALIAS = NAME;

    NodeRef splineRef; // 40
    uint8_t unk48[0x4C - 0x48]; // 48
    bool reverseSpline; // 4C
    bool backwards; // 4D
    uint8_t unk4E[0x88 - 0x4E]; // 4E
};
RED4EXT_ASSERT_SIZE(DriveFollowSplineEvent, 0x88);
} // namespace vehicle
using vehicleDriveFollowSplineEvent = vehicle::DriveFollowSplineEvent;
} // namespace RED4ext

// clang-format on
