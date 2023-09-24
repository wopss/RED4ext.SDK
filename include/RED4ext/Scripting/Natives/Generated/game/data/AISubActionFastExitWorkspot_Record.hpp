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
struct AISubActionFastExitWorkspot_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionFastExitWorkspot_Record";
    static constexpr const char* ALIAS = "AISubActionFastExitWorkspot_Record";

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionFastExitWorkspot_Record, 0x88);
} // namespace game::data
using gamedataAISubActionFastExitWorkspot_Record = game::data::AISubActionFastExitWorkspot_Record;
using AISubActionFastExitWorkspot_Record = game::data::AISubActionFastExitWorkspot_Record;
} // namespace RED4ext

// clang-format on
