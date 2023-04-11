#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SpawnedVehicleType.hpp>

namespace RED4ext
{
namespace quest
{
struct VehicleSpawned_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleSpawned_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 38
    EComparisonType comparisonType; // 70
    uint32_t count; // 74
    quest::SpawnedVehicleType vehicleType; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    CString vehicleName; // 80
    CName vehicleGlobalName; // A0
};
RED4EXT_ASSERT_SIZE(VehicleSpawned_ConditionType, 0xA8);
} // namespace quest
using questVehicleSpawned_ConditionType = quest::VehicleSpawned_ConditionType;
} // namespace RED4ext

// clang-format on
