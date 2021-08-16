#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct StatModifier_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStatModifier_Record";
    static constexpr const char* ALIAS = "StatModifier_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatModifier_Record, 0x50);
} // namespace game::data
using StatModifier_Record = game::data::StatModifier_Record;
} // namespace RED4ext
