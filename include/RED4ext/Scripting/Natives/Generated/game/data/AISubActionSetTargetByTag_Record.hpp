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
struct AISubActionSetTargetByTag_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSetTargetByTag_Record";
    static constexpr const char* ALIAS = "AISubActionSetTargetByTag_Record";

    uint8_t unk48[0xD0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionSetTargetByTag_Record, 0xD0);
} // namespace game::data
using gamedataAISubActionSetTargetByTag_Record = game::data::AISubActionSetTargetByTag_Record;
using AISubActionSetTargetByTag_Record = game::data::AISubActionSetTargetByTag_Record;
} // namespace RED4ext

// clang-format on
