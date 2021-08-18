#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VehicleWheelDrivingSetup_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct VehicleWheelDrivingSetup_2_Record : game::data::VehicleWheelDrivingSetup_Record
{
    static constexpr const char* NAME = "gamedataVehicleWheelDrivingSetup_2_Record";
    static constexpr const char* ALIAS = "VehicleWheelDrivingSetup_2_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(VehicleWheelDrivingSetup_2_Record, 0x58);
} // namespace game::data
using VehicleWheelDrivingSetup_2_Record = game::data::VehicleWheelDrivingSetup_2_Record;
} // namespace RED4ext
