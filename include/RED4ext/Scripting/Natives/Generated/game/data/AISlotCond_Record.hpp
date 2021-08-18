#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIItemCond_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISlotCond_Record : game::data::AIItemCond_Record
{
    static constexpr const char* NAME = "gamedataAISlotCond_Record";
    static constexpr const char* ALIAS = "AISlotCond_Record";

    uint8_t unk68[0x78 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AISlotCond_Record, 0x78);
} // namespace game::data
using AISlotCond_Record = game::data::AISlotCond_Record;
} // namespace RED4ext
