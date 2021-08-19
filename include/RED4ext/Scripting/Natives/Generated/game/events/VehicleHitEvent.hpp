#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/HitEvent.hpp>

namespace RED4ext
{
namespace game::events { 
struct VehicleHitEvent : game::events::HitEvent
{
    static constexpr const char* NAME = "gameeventsVehicleHitEvent";
    static constexpr const char* ALIAS = NAME;

    Vector4 vehicleVelocity; // E0
    Vector4 preyVelocity; // F0
};
RED4EXT_ASSERT_SIZE(VehicleHitEvent, 0x100);
} // namespace game::events
} // namespace RED4ext
