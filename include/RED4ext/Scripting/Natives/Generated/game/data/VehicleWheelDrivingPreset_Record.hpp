#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct VehicleWheelDrivingPreset_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleWheelDrivingPreset_Record";
    static constexpr const char* ALIAS = "VehicleWheelDrivingPreset_Record";

    uint8_t unk48[0x168 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleWheelDrivingPreset_Record, 0x168);
} // namespace game::data
using gamedataVehicleWheelDrivingPreset_Record = game::data::VehicleWheelDrivingPreset_Record;
using VehicleWheelDrivingPreset_Record = game::data::VehicleWheelDrivingPreset_Record;
} // namespace RED4ext

// clang-format on
