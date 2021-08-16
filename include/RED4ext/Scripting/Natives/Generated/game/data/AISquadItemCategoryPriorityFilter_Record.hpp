#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISquadItemPriorityFilter_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISquadItemCategoryPriorityFilter_Record : game::data::AISquadItemPriorityFilter_Record
{
    static constexpr const char* NAME = "gamedataAISquadItemCategoryPriorityFilter_Record";
    static constexpr const char* ALIAS = "AISquadItemCategoryPriorityFilter_Record";

    uint8_t unk68[0x70 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AISquadItemCategoryPriorityFilter_Record, 0x70);
} // namespace game::data
using AISquadItemCategoryPriorityFilter_Record = game::data::AISquadItemCategoryPriorityFilter_Record;
} // namespace RED4ext
