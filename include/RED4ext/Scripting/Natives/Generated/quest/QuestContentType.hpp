#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace quest {
enum class QuestContentType : int8_t
{
    EP1_MainQuest = 0,
    EP1_SideQuest = 1,
    EP1_Minor = 2,
    Fixer = 3,
    MainQuest = 4,
    SideQuest_MainPath = 5,
    SideQuest_Romance = 6,
    SideQuest_Standalone = 7,
    MinorQuestAndSts = 8,
};
} // namespace quest
using questQuestContentType = quest::QuestContentType;
} // namespace RED4ext

// clang-format on
