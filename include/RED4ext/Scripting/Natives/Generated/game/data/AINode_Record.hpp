#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIRecord_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AINode_Record : game::data::AIRecord_Record
{
    static constexpr const char* NAME = "gamedataAINode_Record";
    static constexpr const char* ALIAS = "AINode_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AINode_Record, 0x78);
} // namespace game::data
using gamedataAINode_Record = game::data::AINode_Record;
using AINode_Record = game::data::AINode_Record;
} // namespace RED4ext

// clang-format on
