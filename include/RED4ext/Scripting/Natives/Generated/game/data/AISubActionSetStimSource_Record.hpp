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
struct AISubActionSetStimSource_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSetStimSource_Record";
    static constexpr const char* ALIAS = "AISubActionSetStimSource_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionSetStimSource_Record, 0x78);
} // namespace game::data
using gamedataAISubActionSetStimSource_Record = game::data::AISubActionSetStimSource_Record;
using AISubActionSetStimSource_Record = game::data::AISubActionSetStimSource_Record;
} // namespace RED4ext

// clang-format on
