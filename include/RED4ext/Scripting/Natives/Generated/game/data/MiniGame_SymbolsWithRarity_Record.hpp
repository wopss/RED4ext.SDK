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
struct MiniGame_SymbolsWithRarity_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataMiniGame_SymbolsWithRarity_Record";
    static constexpr const char* ALIAS = "MiniGame_SymbolsWithRarity_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MiniGame_SymbolsWithRarity_Record, 0x70);
} // namespace game::data
using gamedataMiniGame_SymbolsWithRarity_Record = game::data::MiniGame_SymbolsWithRarity_Record;
using MiniGame_SymbolsWithRarity_Record = game::data::MiniGame_SymbolsWithRarity_Record;
} // namespace RED4ext

// clang-format on
