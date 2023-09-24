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
struct DynamicVehicleData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataDynamicVehicleData_Record";
    static constexpr const char* ALIAS = "DynamicVehicleData_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DynamicVehicleData_Record, 0x60);
} // namespace game::data
using gamedataDynamicVehicleData_Record = game::data::DynamicVehicleData_Record;
using DynamicVehicleData_Record = game::data::DynamicVehicleData_Record;
} // namespace RED4ext

// clang-format on
