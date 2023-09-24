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
struct AISubActionConditionalFailure_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionConditionalFailure_Record";
    static constexpr const char* ALIAS = "AISubActionConditionalFailure_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionConditionalFailure_Record, 0x70);
} // namespace game::data
using gamedataAISubActionConditionalFailure_Record = game::data::AISubActionConditionalFailure_Record;
using AISubActionConditionalFailure_Record = game::data::AISubActionConditionalFailure_Record;
} // namespace RED4ext

// clang-format on
