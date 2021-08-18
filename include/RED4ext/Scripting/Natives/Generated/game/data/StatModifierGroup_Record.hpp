#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct StatModifierGroup_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStatModifierGroup_Record";
    static constexpr const char* ALIAS = "StatModifierGroup_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatModifierGroup_Record, 0x58);
} // namespace game::data
using StatModifierGroup_Record = game::data::StatModifierGroup_Record;
} // namespace RED4ext
