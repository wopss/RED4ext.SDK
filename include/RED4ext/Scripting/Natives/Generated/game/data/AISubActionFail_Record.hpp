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
struct AISubActionFail_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionFail_Record";
    static constexpr const char* ALIAS = "AISubActionFail_Record";

};
RED4EXT_ASSERT_SIZE(AISubActionFail_Record, 0x48);
} // namespace game::data
using gamedataAISubActionFail_Record = game::data::AISubActionFail_Record;
using AISubActionFail_Record = game::data::AISubActionFail_Record;
} // namespace RED4ext

// clang-format on
