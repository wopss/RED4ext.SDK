#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISubActionMeleeAttackManager_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionMeleeAttackManager_Record";
    static constexpr const char* ALIAS = "AISubActionMeleeAttackManager_Record";

    uint8_t unk48[0xA8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionMeleeAttackManager_Record, 0xA8);
} // namespace game::data
using gamedataAISubActionMeleeAttackManager_Record = game::data::AISubActionMeleeAttackManager_Record;
using AISubActionMeleeAttackManager_Record = game::data::AISubActionMeleeAttackManager_Record;
} // namespace RED4ext

// clang-format on
