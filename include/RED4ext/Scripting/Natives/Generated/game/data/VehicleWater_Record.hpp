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
struct VehicleWater_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleWater_Record";
    static constexpr const char* ALIAS = "VehicleWater_Record";

    uint8_t unk48[0x130 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleWater_Record, 0x130);
} // namespace game::data
using gamedataVehicleWater_Record = game::data::VehicleWater_Record;
using VehicleWater_Record = game::data::VehicleWater_Record;
} // namespace RED4ext

// clang-format on
