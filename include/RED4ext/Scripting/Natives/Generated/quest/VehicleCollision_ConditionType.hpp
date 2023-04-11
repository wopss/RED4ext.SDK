#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ImpulseMagnitude.hpp>

namespace RED4ext
{
namespace quest
{
struct VehicleCollision_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleCollision_ConditionType";
    static constexpr const char* ALIAS = NAME;

    quest::ImpulseMagnitude magnitude; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(VehicleCollision_ConditionType, 0x40);
} // namespace quest
using questVehicleCollision_ConditionType = quest::VehicleCollision_ConditionType;
} // namespace RED4ext

// clang-format on
