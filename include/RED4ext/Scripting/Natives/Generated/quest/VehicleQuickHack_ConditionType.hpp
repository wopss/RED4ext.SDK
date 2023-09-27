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
struct VehicleQuickHack_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleQuickHack_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 38
    bool checkAccelerate; // 70
    bool checkForceBrakes; // 71
    bool checkRemoteControl; // 72
    uint8_t unk73[0x78 - 0x73]; // 73
};
RED4EXT_ASSERT_SIZE(VehicleQuickHack_ConditionType, 0x78);
} // namespace quest
using questVehicleQuickHack_ConditionType = quest::VehicleQuickHack_ConditionType;
} // namespace RED4ext

// clang-format on
