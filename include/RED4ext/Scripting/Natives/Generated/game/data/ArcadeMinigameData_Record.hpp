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
struct ArcadeMinigameData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataArcadeMinigameData_Record";
    static constexpr const char* ALIAS = "ArcadeMinigameData_Record";

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ArcadeMinigameData_Record, 0xA0);
} // namespace game::data
using gamedataArcadeMinigameData_Record = game::data::ArcadeMinigameData_Record;
using ArcadeMinigameData_Record = game::data::ArcadeMinigameData_Record;
} // namespace RED4ext

// clang-format on
