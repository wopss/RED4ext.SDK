#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace vehicle
{
struct DriveFollowEvent : red::Event
{
    static constexpr const char* NAME = "vehicleDriveFollowEvent";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> targetObjToFollow; // 40
    uint8_t unk50[0x54 - 0x50]; // 50
    float distanceMin; // 54
    float distanceMax; // 58
    bool stopWhenTargetReached; // 5C
    bool useTraffic; // 5D
    uint8_t unk5E[0x60 - 0x5E]; // 5E
};
RED4EXT_ASSERT_SIZE(DriveFollowEvent, 0x60);
} // namespace vehicle
using vehicleDriveFollowEvent = vehicle::DriveFollowEvent;
} // namespace RED4ext

// clang-format on
