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
struct AIIsOnNavmeshCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIIsOnNavmeshCond_Record";
    static constexpr const char* ALIAS = "AIIsOnNavmeshCond_Record";

    uint8_t unk58[0x70 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIIsOnNavmeshCond_Record, 0x70);
} // namespace game::data
using gamedataAIIsOnNavmeshCond_Record = game::data::AIIsOnNavmeshCond_Record;
using AIIsOnNavmeshCond_Record = game::data::AIIsOnNavmeshCond_Record;
} // namespace RED4ext

// clang-format on
