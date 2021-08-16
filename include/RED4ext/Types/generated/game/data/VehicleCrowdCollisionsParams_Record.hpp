#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct VehicleCrowdCollisionsParams_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleCrowdCollisionsParams_Record";
    static constexpr const char* ALIAS = "VehicleCrowdCollisionsParams_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleCrowdCollisionsParams_Record, 0x60);
} // namespace game::data
using VehicleCrowdCollisionsParams_Record = game::data::VehicleCrowdCollisionsParams_Record;
} // namespace RED4ext
