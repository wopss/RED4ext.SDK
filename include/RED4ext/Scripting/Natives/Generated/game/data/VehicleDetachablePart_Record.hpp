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
struct VehicleDetachablePart_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleDetachablePart_Record";
    static constexpr const char* ALIAS = "VehicleDetachablePart_Record";

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleDetachablePart_Record, 0x88);
} // namespace game::data
using gamedataVehicleDetachablePart_Record = game::data::VehicleDetachablePart_Record;
using VehicleDetachablePart_Record = game::data::VehicleDetachablePart_Record;
} // namespace RED4ext

// clang-format on
