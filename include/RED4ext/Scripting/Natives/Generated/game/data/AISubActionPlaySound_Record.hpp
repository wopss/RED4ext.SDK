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
struct AISubActionPlaySound_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionPlaySound_Record";
    static constexpr const char* ALIAS = "AISubActionPlaySound_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionPlaySound_Record, 0x70);
} // namespace game::data
using gamedataAISubActionPlaySound_Record = game::data::AISubActionPlaySound_Record;
using AISubActionPlaySound_Record = game::data::AISubActionPlaySound_Record;
} // namespace RED4ext

// clang-format on
