#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct JournalMetaQuestScriptedData
{
    static constexpr const char* NAME = "gameJournalMetaQuestScriptedData";
    static constexpr const char* ALIAS = "JournalMetaQuestScriptedData";

    bool hidden; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    uint32_t percent; // 04
    CString text; // 08
};
RED4EXT_ASSERT_SIZE(JournalMetaQuestScriptedData, 0x28);
} // namespace game
using gameJournalMetaQuestScriptedData = game::JournalMetaQuestScriptedData;
using JournalMetaQuestScriptedData = game::JournalMetaQuestScriptedData;
} // namespace RED4ext

// clang-format on
