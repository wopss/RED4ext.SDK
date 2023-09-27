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
struct VehicleTrafficSuspension_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleTrafficSuspension_Record";
    static constexpr const char* ALIAS = "VehicleTrafficSuspension_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleTrafficSuspension_Record, 0x78);
} // namespace game::data
using gamedataVehicleTrafficSuspension_Record = game::data::VehicleTrafficSuspension_Record;
using VehicleTrafficSuspension_Record = game::data::VehicleTrafficSuspension_Record;
} // namespace RED4ext

// clang-format on
