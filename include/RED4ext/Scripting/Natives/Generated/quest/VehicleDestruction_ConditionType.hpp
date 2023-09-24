#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct VehicleDestruction_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleDestruction_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 38
    float destruction; // 70
    EComparisonType comparisonType; // 74
};
RED4EXT_ASSERT_SIZE(VehicleDestruction_ConditionType, 0x78);
} // namespace quest
using questVehicleDestruction_ConditionType = quest::VehicleDestruction_ConditionType;
} // namespace RED4ext

// clang-format on
