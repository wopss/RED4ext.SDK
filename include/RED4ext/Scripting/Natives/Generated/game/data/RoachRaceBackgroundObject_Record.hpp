#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ArcadeObject_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct RoachRaceBackgroundObject_Record : game::data::ArcadeObject_Record
{
    static constexpr const char* NAME = "gamedataRoachRaceBackgroundObject_Record";
    static constexpr const char* ALIAS = "RoachRaceBackgroundObject_Record";

    uint8_t unk88[0xA0 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(RoachRaceBackgroundObject_Record, 0xA0);
} // namespace game::data
using gamedataRoachRaceBackgroundObject_Record = game::data::RoachRaceBackgroundObject_Record;
using RoachRaceBackgroundObject_Record = game::data::RoachRaceBackgroundObject_Record;
} // namespace RED4ext

// clang-format on
