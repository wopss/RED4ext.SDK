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
struct AISubActionForceDeath_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionForceDeath_Record";
    static constexpr const char* ALIAS = "AISubActionForceDeath_Record";

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionForceDeath_Record, 0x88);
} // namespace game::data
using gamedataAISubActionForceDeath_Record = game::data::AISubActionForceDeath_Record;
using AISubActionForceDeath_Record = game::data::AISubActionForceDeath_Record;
} // namespace RED4ext

// clang-format on
