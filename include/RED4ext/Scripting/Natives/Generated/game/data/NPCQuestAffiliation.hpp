#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class NPCQuestAffiliation : int32_t
{
    General = 0,
    MainQuest = 1,
    MinorActivity = 2,
    MinorQuest = 3,
    SideQuest = 4,
    StreetStory = 5,
    Count = 6,
    Invalid = 7,
};
} // namespace game::data
using gamedataNPCQuestAffiliation = game::data::NPCQuestAffiliation;
} // namespace RED4ext

// clang-format on
