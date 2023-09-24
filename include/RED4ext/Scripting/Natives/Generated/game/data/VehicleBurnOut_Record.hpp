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
struct VehicleBurnOut_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleBurnOut_Record";
    static constexpr const char* ALIAS = "VehicleBurnOut_Record";

    uint8_t unk48[0x100 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleBurnOut_Record, 0x100);
} // namespace game::data
using gamedataVehicleBurnOut_Record = game::data::VehicleBurnOut_Record;
using VehicleBurnOut_Record = game::data::VehicleBurnOut_Record;
} // namespace RED4ext

// clang-format on
