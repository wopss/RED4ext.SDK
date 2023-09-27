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
struct VehicleDefaultState_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleDefaultState_Record";
    static constexpr const char* ALIAS = "VehicleDefaultState_Record";

    uint8_t unk48[0x118 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleDefaultState_Record, 0x118);
} // namespace game::data
using gamedataVehicleDefaultState_Record = game::data::VehicleDefaultState_Record;
using VehicleDefaultState_Record = game::data::VehicleDefaultState_Record;
} // namespace RED4ext

// clang-format on
