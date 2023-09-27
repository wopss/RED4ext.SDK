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
struct AISubActionCompleteCommand_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionCompleteCommand_Record";
    static constexpr const char* ALIAS = "AISubActionCompleteCommand_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionCompleteCommand_Record, 0x78);
} // namespace game::data
using gamedataAISubActionCompleteCommand_Record = game::data::AISubActionCompleteCommand_Record;
using AISubActionCompleteCommand_Record = game::data::AISubActionCompleteCommand_Record;
} // namespace RED4ext

// clang-format on
