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
struct VehicleStoppingSettings_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleStoppingSettings_Record";
    static constexpr const char* ALIAS = "VehicleStoppingSettings_Record";

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleStoppingSettings_Record, 0x88);
} // namespace game::data
using gamedataVehicleStoppingSettings_Record = game::data::VehicleStoppingSettings_Record;
using VehicleStoppingSettings_Record = game::data::VehicleStoppingSettings_Record;
} // namespace RED4ext

// clang-format on
