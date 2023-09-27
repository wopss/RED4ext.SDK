#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AIPreviousAttackCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIPreviousAttackCond_Record";
    static constexpr const char* ALIAS = "AIPreviousAttackCond_Record";

    uint8_t unk58[0x80 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIPreviousAttackCond_Record, 0x80);
} // namespace game::data
using gamedataAIPreviousAttackCond_Record = game::data::AIPreviousAttackCond_Record;
using AIPreviousAttackCond_Record = game::data::AIPreviousAttackCond_Record;
} // namespace RED4ext

// clang-format on
