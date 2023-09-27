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
struct AISubActionRegisterActionName_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionRegisterActionName_Record";
    static constexpr const char* ALIAS = "AISubActionRegisterActionName_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionRegisterActionName_Record, 0x58);
} // namespace game::data
using gamedataAISubActionRegisterActionName_Record = game::data::AISubActionRegisterActionName_Record;
using AISubActionRegisterActionName_Record = game::data::AISubActionRegisterActionName_Record;
} // namespace RED4ext

// clang-format on
