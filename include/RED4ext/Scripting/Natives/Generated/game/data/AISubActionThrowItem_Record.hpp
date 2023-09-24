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
struct AISubActionThrowItem_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionThrowItem_Record";
    static constexpr const char* ALIAS = "AISubActionThrowItem_Record";

    uint8_t unk48[0xB8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionThrowItem_Record, 0xB8);
} // namespace game::data
using gamedataAISubActionThrowItem_Record = game::data::AISubActionThrowItem_Record;
using AISubActionThrowItem_Record = game::data::AISubActionThrowItem_Record;
} // namespace RED4ext

// clang-format on
