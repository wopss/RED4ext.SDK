#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MiniGame_SymbolsWithRarity_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct MiniGame_AllSymbols_inline2_Record : game::data::MiniGame_SymbolsWithRarity_Record
{
    static constexpr const char* NAME = "gamedataMiniGame_AllSymbols_inline2_Record";
    static constexpr const char* ALIAS = "MiniGame_AllSymbols_inline2_Record";

};
RED4EXT_ASSERT_SIZE(MiniGame_AllSymbols_inline2_Record, 0x58);
} // namespace game::data
using MiniGame_AllSymbols_inline2_Record = game::data::MiniGame_AllSymbols_inline2_Record;
} // namespace RED4ext
