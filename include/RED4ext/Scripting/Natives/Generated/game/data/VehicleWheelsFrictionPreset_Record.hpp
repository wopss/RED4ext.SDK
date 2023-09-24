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
struct VehicleWheelsFrictionPreset_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleWheelsFrictionPreset_Record";
    static constexpr const char* ALIAS = "VehicleWheelsFrictionPreset_Record";

    uint8_t unk48[0xC0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleWheelsFrictionPreset_Record, 0xC0);
} // namespace game::data
using gamedataVehicleWheelsFrictionPreset_Record = game::data::VehicleWheelsFrictionPreset_Record;
using VehicleWheelsFrictionPreset_Record = game::data::VehicleWheelsFrictionPreset_Record;
} // namespace RED4ext

// clang-format on
