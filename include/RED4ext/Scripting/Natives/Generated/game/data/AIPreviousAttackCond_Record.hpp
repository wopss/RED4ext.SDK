#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIPreviousAttackCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIPreviousAttackCond_Record";
    static constexpr const char* ALIAS = "AIPreviousAttackCond_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AIPreviousAttackCond_Record, 0x60);
} // namespace game::data
using AIPreviousAttackCond_Record = game::data::AIPreviousAttackCond_Record;
} // namespace RED4ext
