#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct VehicleFxWheelsDecals_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleFxWheelsDecals_Record";
    static constexpr const char* ALIAS = "VehicleFxWheelsDecals_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleFxWheelsDecals_Record, 0x58);
} // namespace game::data
using VehicleFxWheelsDecals_Record = game::data::VehicleFxWheelsDecals_Record;
} // namespace RED4ext
