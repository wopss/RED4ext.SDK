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
struct VehicleAppearancesToColorTemplate_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleAppearancesToColorTemplate_Record";
    static constexpr const char* ALIAS = "VehicleAppearancesToColorTemplate_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleAppearancesToColorTemplate_Record, 0x58);
} // namespace game::data
using gamedataVehicleAppearancesToColorTemplate_Record = game::data::VehicleAppearancesToColorTemplate_Record;
using VehicleAppearancesToColorTemplate_Record = game::data::VehicleAppearancesToColorTemplate_Record;
} // namespace RED4ext

// clang-format on
