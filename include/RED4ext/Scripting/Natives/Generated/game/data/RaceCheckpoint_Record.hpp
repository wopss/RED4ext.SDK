#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/LCDScreen_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct RaceCheckpoint_Record : game::data::LCDScreen_Record
{
    static constexpr const char* NAME = "gamedataRaceCheckpoint_Record";
    static constexpr const char* ALIAS = "RaceCheckpoint_Record";

};
RED4EXT_ASSERT_SIZE(RaceCheckpoint_Record, 0x80);
} // namespace game::data
using gamedataRaceCheckpoint_Record = game::data::RaceCheckpoint_Record;
using RaceCheckpoint_Record = game::data::RaceCheckpoint_Record;
} // namespace RED4ext

// clang-format on
