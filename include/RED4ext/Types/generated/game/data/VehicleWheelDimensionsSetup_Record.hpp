#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct VehicleWheelDimensionsSetup_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleWheelDimensionsSetup_Record";
    static constexpr const char* ALIAS = "VehicleWheelDimensionsSetup_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleWheelDimensionsSetup_Record, 0x50);
} // namespace game::data
using VehicleWheelDimensionsSetup_Record = game::data::VehicleWheelDimensionsSetup_Record;
} // namespace RED4ext
