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
struct AISubActionStatusEffect_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionStatusEffect_Record";
    static constexpr const char* ALIAS = "AISubActionStatusEffect_Record";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionStatusEffect_Record, 0x90);
} // namespace game::data
using gamedataAISubActionStatusEffect_Record = game::data::AISubActionStatusEffect_Record;
using AISubActionStatusEffect_Record = game::data::AISubActionStatusEffect_Record;
} // namespace RED4ext

// clang-format on
