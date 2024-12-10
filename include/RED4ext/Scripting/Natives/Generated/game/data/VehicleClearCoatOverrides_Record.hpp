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
struct VehicleClearCoatOverrides_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleClearCoatOverrides_Record";
    static constexpr const char* ALIAS = "VehicleClearCoatOverrides_Record";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleClearCoatOverrides_Record, 0x90);
} // namespace game::data
using gamedataVehicleClearCoatOverrides_Record = game::data::VehicleClearCoatOverrides_Record;
using VehicleClearCoatOverrides_Record = game::data::VehicleClearCoatOverrides_Record;
} // namespace RED4ext

// clang-format on
