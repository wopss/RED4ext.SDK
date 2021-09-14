#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct VehicleProceduralFPPCameraParams_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleProceduralFPPCameraParams_Record";
    static constexpr const char* ALIAS = "VehicleProceduralFPPCameraParams_Record";

    uint8_t unk48[0x98 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleProceduralFPPCameraParams_Record, 0x98);
} // namespace game::data
using VehicleProceduralFPPCameraParams_Record = game::data::VehicleProceduralFPPCameraParams_Record;
} // namespace RED4ext
