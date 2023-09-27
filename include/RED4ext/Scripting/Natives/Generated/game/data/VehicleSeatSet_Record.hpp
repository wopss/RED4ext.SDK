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
struct VehicleSeatSet_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleSeatSet_Record";
    static constexpr const char* ALIAS = "VehicleSeatSet_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleSeatSet_Record, 0x58);
} // namespace game::data
using gamedataVehicleSeatSet_Record = game::data::VehicleSeatSet_Record;
using VehicleSeatSet_Record = game::data::VehicleSeatSet_Record;
} // namespace RED4ext

// clang-format on
