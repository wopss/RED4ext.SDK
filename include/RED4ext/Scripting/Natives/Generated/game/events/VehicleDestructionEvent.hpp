#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct IPlacedComponent; }
namespace game::damage { struct AttackData; }

namespace game::events
{
struct __declspec(align(0x10)) VehicleDestructionEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsVehicleDestructionEvent";
    static constexpr const char* ALIAS = "gameVehicleDestructionEvent";

    Handle<game::damage::AttackData> attackData; // 40
    Vector4 hitPosition; // 50
    Vector4 hitDirection; // 60
    WeakHandle<ent::IPlacedComponent> hitComponent; // 70
};
RED4EXT_ASSERT_SIZE(VehicleDestructionEvent, 0x80);
} // namespace game::events
using gameeventsVehicleDestructionEvent = game::events::VehicleDestructionEvent;
using gameVehicleDestructionEvent = game::events::VehicleDestructionEvent;
} // namespace RED4ext

// clang-format on
