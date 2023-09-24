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
struct VehicleWater_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleWater_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 38
    bool anyVehicle; // 70
    bool submergedOnly; // 71
    bool onEnter; // 72
    uint8_t unk73[0x78 - 0x73]; // 73
};
RED4EXT_ASSERT_SIZE(VehicleWater_ConditionType, 0x78);
} // namespace quest
using questVehicleWater_ConditionType = quest::VehicleWater_ConditionType;
} // namespace RED4ext

// clang-format on
