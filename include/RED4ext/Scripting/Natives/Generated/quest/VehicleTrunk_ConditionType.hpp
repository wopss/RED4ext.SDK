#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct VehicleTrunk_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleTrunk_ConditionType";
    static constexpr const char* ALIAS = NAME;

    bool playerVehicle; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    game::EntityReference vehicleRef; // 40
    game::EntityReference objectRef; // 78
    bool inverted; // B0
    bool isInside; // B1
    bool anyVehicle; // B2
    bool anyObject; // B3
    uint8_t unkB4[0xB8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(VehicleTrunk_ConditionType, 0xB8);
} // namespace quest
using questVehicleTrunk_ConditionType = quest::VehicleTrunk_ConditionType;
} // namespace RED4ext

// clang-format on
