#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct RoachRaceMovement_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataRoachRaceMovement_Record";
    static constexpr const char* ALIAS = "RoachRaceMovement_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RoachRaceMovement_Record, 0x58);
} // namespace game::data
using RoachRaceMovement_Record = game::data::RoachRaceMovement_Record;
} // namespace RED4ext

// clang-format on
