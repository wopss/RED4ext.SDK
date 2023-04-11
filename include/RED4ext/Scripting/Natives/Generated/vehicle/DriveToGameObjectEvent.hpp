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
struct DriveToGameObjectEvent : red::Event
{
    static constexpr const char* NAME = "vehicleDriveToGameObjectEvent";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> targetObjToReach; // 40
};
RED4EXT_ASSERT_SIZE(DriveToGameObjectEvent, 0x50);
} // namespace vehicle
using vehicleDriveToGameObjectEvent = vehicle::DriveToGameObjectEvent;
} // namespace RED4ext

// clang-format on
