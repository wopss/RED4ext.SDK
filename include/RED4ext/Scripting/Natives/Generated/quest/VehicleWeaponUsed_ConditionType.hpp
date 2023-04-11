#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/VehicleWeaponQuestID.hpp>

namespace RED4ext
{
namespace quest
{
struct VehicleWeaponUsed_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleWeaponUsed_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 38
    quest::VehicleWeaponQuestID weapon; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(VehicleWeaponUsed_ConditionType, 0x78);
} // namespace quest
using questVehicleWeaponUsed_ConditionType = quest::VehicleWeaponUsed_ConditionType;
} // namespace RED4ext

// clang-format on
