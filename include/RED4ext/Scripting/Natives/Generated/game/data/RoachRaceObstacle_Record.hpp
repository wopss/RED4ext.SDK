#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/RoachRaceObject_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct RoachRaceObstacle_Record : game::data::RoachRaceObject_Record
{
    static constexpr const char* NAME = "gamedataRoachRaceObstacle_Record";
    static constexpr const char* ALIAS = "RoachRaceObstacle_Record";

    uint8_t unk70[0x80 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(RoachRaceObstacle_Record, 0x80);
} // namespace game::data
using RoachRaceObstacle_Record = game::data::RoachRaceObstacle_Record;
} // namespace RED4ext
