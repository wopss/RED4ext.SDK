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
struct AISubActionUpdateFriendlyFireParams_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionUpdateFriendlyFireParams_Record";
    static constexpr const char* ALIAS = "AISubActionUpdateFriendlyFireParams_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionUpdateFriendlyFireParams_Record, 0x58);
} // namespace game::data
using gamedataAISubActionUpdateFriendlyFireParams_Record = game::data::AISubActionUpdateFriendlyFireParams_Record;
using AISubActionUpdateFriendlyFireParams_Record = game::data::AISubActionUpdateFriendlyFireParams_Record;
} // namespace RED4ext

// clang-format on
