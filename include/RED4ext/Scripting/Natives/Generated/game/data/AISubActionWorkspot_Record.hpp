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
struct AISubActionWorkspot_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionWorkspot_Record";
    static constexpr const char* ALIAS = "AISubActionWorkspot_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionWorkspot_Record, 0x58);
} // namespace game::data
using gamedataAISubActionWorkspot_Record = game::data::AISubActionWorkspot_Record;
using AISubActionWorkspot_Record = game::data::AISubActionWorkspot_Record;
} // namespace RED4ext

// clang-format on
