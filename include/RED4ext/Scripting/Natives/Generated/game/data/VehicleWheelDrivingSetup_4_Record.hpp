#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VehicleWheelDrivingSetup_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct VehicleWheelDrivingSetup_4_Record : game::data::VehicleWheelDrivingSetup_Record
{
    static constexpr const char* NAME = "gamedataVehicleWheelDrivingSetup_4_Record";
    static constexpr const char* ALIAS = "VehicleWheelDrivingSetup_4_Record";

    uint8_t unk60[0x90 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(VehicleWheelDrivingSetup_4_Record, 0x90);
} // namespace game::data
using gamedataVehicleWheelDrivingSetup_4_Record = game::data::VehicleWheelDrivingSetup_4_Record;
using VehicleWheelDrivingSetup_4_Record = game::data::VehicleWheelDrivingSetup_4_Record;
} // namespace RED4ext

// clang-format on
