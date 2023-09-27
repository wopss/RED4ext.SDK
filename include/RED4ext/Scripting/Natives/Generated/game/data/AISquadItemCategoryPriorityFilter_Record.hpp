#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISquadItemPriorityFilter_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISquadItemCategoryPriorityFilter_Record : game::data::AISquadItemPriorityFilter_Record
{
    static constexpr const char* NAME = "gamedataAISquadItemCategoryPriorityFilter_Record";
    static constexpr const char* ALIAS = "AISquadItemCategoryPriorityFilter_Record";

    uint8_t unk90[0xA0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(AISquadItemCategoryPriorityFilter_Record, 0xA0);
} // namespace game::data
using gamedataAISquadItemCategoryPriorityFilter_Record = game::data::AISquadItemCategoryPriorityFilter_Record;
using AISquadItemCategoryPriorityFilter_Record = game::data::AISquadItemCategoryPriorityFilter_Record;
} // namespace RED4ext

// clang-format on
