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
struct VehicleAVArrived_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleAVArrived_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 38
};
RED4EXT_ASSERT_SIZE(VehicleAVArrived_ConditionType, 0x70);
} // namespace quest
using questVehicleAVArrived_ConditionType = quest::VehicleAVArrived_ConditionType;
} // namespace RED4ext

// clang-format on
