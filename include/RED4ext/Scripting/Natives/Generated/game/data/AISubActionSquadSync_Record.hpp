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
struct AISubActionSquadSync_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSquadSync_Record";
    static constexpr const char* ALIAS = "AISubActionSquadSync_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionSquadSync_Record, 0x60);
} // namespace game::data
using gamedataAISubActionSquadSync_Record = game::data::AISubActionSquadSync_Record;
using AISubActionSquadSync_Record = game::data::AISubActionSquadSync_Record;
} // namespace RED4ext

// clang-format on
