#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionSetTargetByTag_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionSetItemAsTarget_Record : game::data::AISubActionSetTargetByTag_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSetItemAsTarget_Record";
    static constexpr const char* ALIAS = "AISubActionSetItemAsTarget_Record";

    uint8_t unk70[0x78 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(AISubActionSetItemAsTarget_Record, 0x78);
} // namespace game::data
using AISubActionSetItemAsTarget_Record = game::data::AISubActionSetItemAsTarget_Record;
} // namespace RED4ext
