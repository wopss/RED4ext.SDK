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
struct AISubActionBlockData_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionBlockData_Record";
    static constexpr const char* ALIAS = "AISubActionBlockData_Record";

};
RED4EXT_ASSERT_SIZE(AISubActionBlockData_Record, 0x48);
} // namespace game::data
using gamedataAISubActionBlockData_Record = game::data::AISubActionBlockData_Record;
using AISubActionBlockData_Record = game::data::AISubActionBlockData_Record;
} // namespace RED4ext

// clang-format on
