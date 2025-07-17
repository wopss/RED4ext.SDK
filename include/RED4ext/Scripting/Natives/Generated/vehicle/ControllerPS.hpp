#pragma once

// clang-format off

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
namespace vehicle
{
struct ControllerPS : game::ComponentPS
{
    static constexpr const char* NAME = "vehicleControllerPS";
    static constexpr const char* ALIAS = NAME;

#pragma warning(suppress : 4324)
    alignas(8) StaticArray<vehicle::VehicleSlotsState, 6> vehicleDoors; // 68
    vehicle::EState state; // 1F0
    bool isAlarmOn; // 1F4
    uint8_t unk1F5[0x1F8 - 0x1F5]; // 1F5
    vehicle::ELightMode lightMode; // 1F8
    bool allowPassengerCameraSwitch; // 1FC
    uint8_t unk1FD[0x200 - 0x1FD]; // 1FD
    int32_t lightTypeMask; // 200
    uint8_t unk204[0x208 - 0x204]; // 204
};
RED4EXT_ASSERT_SIZE(ControllerPS, 0x208);
} // namespace vehicle
using vehicleControllerPS = vehicle::ControllerPS;
} // namespace RED4ext

// clang-format on
