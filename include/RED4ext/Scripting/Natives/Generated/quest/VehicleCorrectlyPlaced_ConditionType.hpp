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
struct VehicleCorrectlyPlaced_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleCorrectlyPlaced_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 38
    float timeInterval; // 70
    bool checkIsUpsideDown; // 74
    bool checkIsOnTheSide; // 75
    bool checkAreAllWheelsOnGround; // 76
    bool inverted; // 77
};
RED4EXT_ASSERT_SIZE(VehicleCorrectlyPlaced_ConditionType, 0x78);
} // namespace quest
using questVehicleCorrectlyPlaced_ConditionType = quest::VehicleCorrectlyPlaced_ConditionType;
} // namespace RED4ext

// clang-format on
