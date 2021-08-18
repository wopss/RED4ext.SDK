#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/ELightMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EState.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/VehicleSlotsState.hpp>

namespace RED4ext
{
namespace vehicle { 
struct ControllerPS : game::ComponentPS
{
    static constexpr const char* NAME = "vehicleControllerPS";
    static constexpr const char* ALIAS = NAME;

    alignas(8) StaticArray<vehicle::VehicleSlotsState, 6> vehicleDoors; // 68
    vehicle::EState state; // 1F0
    bool isAlarmOn; // 1F4
    uint8_t unk1F5[0x1F8 - 0x1F5]; // 1F5
    vehicle::ELightMode lightMode; // 1F8
    uint8_t unk1FC[0x200 - 0x1FC]; // 1FC
};
RED4EXT_ASSERT_SIZE(ControllerPS, 0x200);
} // namespace vehicle
} // namespace RED4ext
