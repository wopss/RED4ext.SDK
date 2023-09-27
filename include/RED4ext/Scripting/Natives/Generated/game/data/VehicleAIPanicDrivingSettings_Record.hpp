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
struct VehicleAIPanicDrivingSettings_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleAIPanicDrivingSettings_Record";
    static constexpr const char* ALIAS = "VehicleAIPanicDrivingSettings_Record";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleAIPanicDrivingSettings_Record, 0x90);
} // namespace game::data
using gamedataVehicleAIPanicDrivingSettings_Record = game::data::VehicleAIPanicDrivingSettings_Record;
using VehicleAIPanicDrivingSettings_Record = game::data::VehicleAIPanicDrivingSettings_Record;
} // namespace RED4ext

// clang-format on
