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
struct VehicleDestruction_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleDestruction_Record";
    static constexpr const char* ALIAS = "VehicleDestruction_Record";

    uint8_t unk48[0x138 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleDestruction_Record, 0x138);
} // namespace game::data
using gamedataVehicleDestruction_Record = game::data::VehicleDestruction_Record;
using VehicleDestruction_Record = game::data::VehicleDestruction_Record;
} // namespace RED4ext

// clang-format on
