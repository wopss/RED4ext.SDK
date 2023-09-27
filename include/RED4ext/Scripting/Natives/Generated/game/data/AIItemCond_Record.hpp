#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AIItemCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIItemCond_Record";
    static constexpr const char* ALIAS = "AIItemCond_Record";

    uint8_t unk58[0xB8 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIItemCond_Record, 0xB8);
} // namespace game::data
using gamedataAIItemCond_Record = game::data::AIItemCond_Record;
using AIItemCond_Record = game::data::AIItemCond_Record;
} // namespace RED4ext

// clang-format on
