#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct QuestPrefabEntry
{
    static constexpr const char* NAME = "questQuestPrefabEntry";
    static constexpr const char* ALIAS = NAME;

    NodeRef prefabNodeRef; // 00
};
RED4EXT_ASSERT_SIZE(QuestPrefabEntry, 0x8);
} // namespace quest
using questQuestPrefabEntry = quest::QuestPrefabEntry;
} // namespace RED4ext

// clang-format on
