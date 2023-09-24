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
struct AISubActionCreateGameEffect_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionCreateGameEffect_Record";
    static constexpr const char* ALIAS = "AISubActionCreateGameEffect_Record";

    uint8_t unk48[0xC0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionCreateGameEffect_Record, 0xC0);
} // namespace game::data
using gamedataAISubActionCreateGameEffect_Record = game::data::AISubActionCreateGameEffect_Record;
using AISubActionCreateGameEffect_Record = game::data::AISubActionCreateGameEffect_Record;
} // namespace RED4ext

// clang-format on
