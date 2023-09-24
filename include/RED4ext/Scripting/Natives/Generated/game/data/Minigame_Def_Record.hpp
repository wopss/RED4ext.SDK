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
struct Minigame_Def_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataMinigame_Def_Record";
    static constexpr const char* ALIAS = "Minigame_Def_Record";

    uint8_t unk48[0x150 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Minigame_Def_Record, 0x150);
} // namespace game::data
using gamedataMinigame_Def_Record = game::data::Minigame_Def_Record;
using Minigame_Def_Record = game::data::Minigame_Def_Record;
} // namespace RED4ext

// clang-format on
