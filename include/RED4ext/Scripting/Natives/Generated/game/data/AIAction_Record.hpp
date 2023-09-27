#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AINode_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AIAction_Record : game::data::AINode_Record
{
    static constexpr const char* NAME = "gamedataAIAction_Record";
    static constexpr const char* ALIAS = "AIAction_Record";

    uint8_t unk78[0x1F0 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(AIAction_Record, 0x1F0);
} // namespace game::data
using gamedataAIAction_Record = game::data::AIAction_Record;
using AIAction_Record = game::data::AIAction_Record;
} // namespace RED4ext

// clang-format on
