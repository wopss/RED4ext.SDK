#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct PassiveProficiencyBonus_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataPassiveProficiencyBonus_Record";
    static constexpr const char* ALIAS = "PassiveProficiencyBonus_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PassiveProficiencyBonus_Record, 0x58);
} // namespace game::data
using PassiveProficiencyBonus_Record = game::data::PassiveProficiencyBonus_Record;
} // namespace RED4ext
