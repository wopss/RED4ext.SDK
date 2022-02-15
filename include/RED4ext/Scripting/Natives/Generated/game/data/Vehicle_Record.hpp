#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SpawnableObject_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Vehicle_Record : game::data::SpawnableObject_Record
{
    static constexpr const char* NAME = "gamedataVehicle_Record";
    static constexpr const char* ALIAS = "Vehicle_Record";

    uint8_t unk78[0x150 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(Vehicle_Record, 0x150);
} // namespace game::data
using Vehicle_Record = game::data::Vehicle_Record;
} // namespace RED4ext
