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
struct AISubActionInitialReaction_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionInitialReaction_Record";
    static constexpr const char* ALIAS = "AISubActionInitialReaction_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionInitialReaction_Record, 0x58);
} // namespace game::data
using gamedataAISubActionInitialReaction_Record = game::data::AISubActionInitialReaction_Record;
using AISubActionInitialReaction_Record = game::data::AISubActionInitialReaction_Record;
} // namespace RED4ext

// clang-format on
