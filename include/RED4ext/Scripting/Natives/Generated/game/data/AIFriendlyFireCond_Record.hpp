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
struct AIFriendlyFireCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIFriendlyFireCond_Record";
    static constexpr const char* ALIAS = "AIFriendlyFireCond_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIFriendlyFireCond_Record, 0x68);
} // namespace game::data
using gamedataAIFriendlyFireCond_Record = game::data::AIFriendlyFireCond_Record;
using AIFriendlyFireCond_Record = game::data::AIFriendlyFireCond_Record;
} // namespace RED4ext

// clang-format on
