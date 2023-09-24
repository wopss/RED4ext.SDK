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
struct VehicleAIVisionSettings_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleAIVisionSettings_Record";
    static constexpr const char* ALIAS = "VehicleAIVisionSettings_Record";

    uint8_t unk48[0xD8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleAIVisionSettings_Record, 0xD8);
} // namespace game::data
using gamedataVehicleAIVisionSettings_Record = game::data::VehicleAIVisionSettings_Record;
using VehicleAIVisionSettings_Record = game::data::VehicleAIVisionSettings_Record;
} // namespace RED4ext

// clang-format on
