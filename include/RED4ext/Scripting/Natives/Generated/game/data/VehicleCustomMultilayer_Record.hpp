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
struct VehicleCustomMultilayer_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleCustomMultilayer_Record";
    static constexpr const char* ALIAS = "VehicleCustomMultilayer_Record";

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleCustomMultilayer_Record, 0xA0);
} // namespace game::data
using gamedataVehicleCustomMultilayer_Record = game::data::VehicleCustomMultilayer_Record;
using VehicleCustomMultilayer_Record = game::data::VehicleCustomMultilayer_Record;
} // namespace RED4ext

// clang-format on
