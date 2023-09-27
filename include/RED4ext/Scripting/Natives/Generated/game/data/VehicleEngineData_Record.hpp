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
struct VehicleEngineData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleEngineData_Record";
    static constexpr const char* ALIAS = "VehicleEngineData_Record";

    uint8_t unk48[0xF0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleEngineData_Record, 0xF0);
} // namespace game::data
using gamedataVehicleEngineData_Record = game::data::VehicleEngineData_Record;
using VehicleEngineData_Record = game::data::VehicleEngineData_Record;
} // namespace RED4ext

// clang-format on
