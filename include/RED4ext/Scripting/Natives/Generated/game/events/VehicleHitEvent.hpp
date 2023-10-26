#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/HitEvent.hpp>

namespace RED4ext
{
namespace game::events
{
struct __declspec(align(0x10)) VehicleHitEvent : game::events::HitEvent
{
    static constexpr const char* NAME = "gameeventsVehicleHitEvent";
    static constexpr const char* ALIAS = "gameVehicleHitEvent";

    Vector4 vehicleVelocity; // F0
    Vector4 preyVelocity; // 100
};
RED4EXT_ASSERT_SIZE(VehicleHitEvent, 0x110);
} // namespace game::events
using gameeventsVehicleHitEvent = game::events::VehicleHitEvent;
using gameVehicleHitEvent = game::events::VehicleHitEvent;
} // namespace RED4ext

// clang-format on
