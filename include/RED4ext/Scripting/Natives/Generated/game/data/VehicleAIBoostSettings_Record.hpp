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
struct VehicleAIBoostSettings_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleAIBoostSettings_Record";
    static constexpr const char* ALIAS = "VehicleAIBoostSettings_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleAIBoostSettings_Record, 0x70);
} // namespace game::data
using gamedataVehicleAIBoostSettings_Record = game::data::VehicleAIBoostSettings_Record;
using VehicleAIBoostSettings_Record = game::data::VehicleAIBoostSettings_Record;
} // namespace RED4ext

// clang-format on
