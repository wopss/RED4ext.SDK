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
struct VehicleProceduralFPPCameraParams_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleProceduralFPPCameraParams_Record";
    static constexpr const char* ALIAS = "VehicleProceduralFPPCameraParams_Record";

    uint8_t unk48[0x180 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleProceduralFPPCameraParams_Record, 0x180);
} // namespace game::data
using gamedataVehicleProceduralFPPCameraParams_Record = game::data::VehicleProceduralFPPCameraParams_Record;
using VehicleProceduralFPPCameraParams_Record = game::data::VehicleProceduralFPPCameraParams_Record;
} // namespace RED4ext

// clang-format on
