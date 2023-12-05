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
struct VehicleDataPackage_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleDataPackage_Record";
    static constexpr const char* ALIAS = "VehicleDataPackage_Record";

    uint8_t unk48[0x220 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleDataPackage_Record, 0x220);
} // namespace game::data
using gamedataVehicleDataPackage_Record = game::data::VehicleDataPackage_Record;
using VehicleDataPackage_Record = game::data::VehicleDataPackage_Record;
} // namespace RED4ext

// clang-format on
