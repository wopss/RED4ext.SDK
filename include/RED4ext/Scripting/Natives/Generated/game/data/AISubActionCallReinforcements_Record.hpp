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
struct AISubActionCallReinforcements_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionCallReinforcements_Record";
    static constexpr const char* ALIAS = "AISubActionCallReinforcements_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionCallReinforcements_Record, 0x60);
} // namespace game::data
using gamedataAISubActionCallReinforcements_Record = game::data::AISubActionCallReinforcements_Record;
using AISubActionCallReinforcements_Record = game::data::AISubActionCallReinforcements_Record;
} // namespace RED4ext

// clang-format on
