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
struct PreventionVehiclePoolData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataPreventionVehiclePoolData_Record";
    static constexpr const char* ALIAS = "PreventionVehiclePoolData_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PreventionVehiclePoolData_Record, 0x60);
} // namespace game::data
using gamedataPreventionVehiclePoolData_Record = game::data::PreventionVehiclePoolData_Record;
using PreventionVehiclePoolData_Record = game::data::PreventionVehiclePoolData_Record;
} // namespace RED4ext

// clang-format on
