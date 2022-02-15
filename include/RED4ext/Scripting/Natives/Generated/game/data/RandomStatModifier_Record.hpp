#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatModifier_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct RandomStatModifier_Record : game::data::StatModifier_Record
{
    static constexpr const char* NAME = "gamedataRandomStatModifier_Record";
    static constexpr const char* ALIAS = "RandomStatModifier_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(RandomStatModifier_Record, 0x60);
} // namespace game::data
using RandomStatModifier_Record = game::data::RandomStatModifier_Record;
} // namespace RED4ext
