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
struct AISubActionTriggerStim_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionTriggerStim_Record";
    static constexpr const char* ALIAS = "AISubActionTriggerStim_Record";

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionTriggerStim_Record, 0xA0);
} // namespace game::data
using gamedataAISubActionTriggerStim_Record = game::data::AISubActionTriggerStim_Record;
using AISubActionTriggerStim_Record = game::data::AISubActionTriggerStim_Record;
} // namespace RED4ext

// clang-format on
