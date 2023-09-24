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
struct AIActionOR_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIActionOR_Record";
    static constexpr const char* ALIAS = "AIActionOR_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIActionOR_Record, 0x68);
} // namespace game::data
using gamedataAIActionOR_Record = game::data::AIActionOR_Record;
using AIActionOR_Record = game::data::AIActionOR_Record;
} // namespace RED4ext

// clang-format on
