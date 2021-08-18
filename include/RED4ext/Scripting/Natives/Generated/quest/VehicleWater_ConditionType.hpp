#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>

namespace RED4ext
{
namespace quest { 
struct VehicleWater_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleWater_ConditionType";
    static constexpr const char* ALIAS = NAME;

    bool submergedOnly; // 38
    bool onEnter; // 39
    uint8_t unk3A[0x40 - 0x3A]; // 3A
};
RED4EXT_ASSERT_SIZE(VehicleWater_ConditionType, 0x40);
} // namespace quest
} // namespace RED4ext
