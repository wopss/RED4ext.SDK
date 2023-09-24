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
struct AISubActionLeaveCover_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionLeaveCover_Record";
    static constexpr const char* ALIAS = "AISubActionLeaveCover_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionLeaveCover_Record, 0x60);
} // namespace game::data
using gamedataAISubActionLeaveCover_Record = game::data::AISubActionLeaveCover_Record;
using AISubActionLeaveCover_Record = game::data::AISubActionLeaveCover_Record;
} // namespace RED4ext

// clang-format on
