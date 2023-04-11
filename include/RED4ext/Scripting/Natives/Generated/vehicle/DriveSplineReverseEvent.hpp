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
struct DriveSplineReverseEvent : red::Event
{
    static constexpr const char* NAME = "vehicleDriveSplineReverseEvent";
    static constexpr const char* ALIAS = NAME;

    NodeRef splineRef; // 40
    uint8_t unk48[0x50 - 0x48]; // 48
    bool reverseSpline; // 50
    bool backwards; // 51
    uint8_t unk52[0x58 - 0x52]; // 52
};
RED4EXT_ASSERT_SIZE(DriveSplineReverseEvent, 0x58);
} // namespace vehicle
using vehicleDriveSplineReverseEvent = vehicle::DriveSplineReverseEvent;
} // namespace RED4ext

// clang-format on
