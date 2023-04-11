#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct IJournalConditionType; }

namespace quest
{
struct JournalCondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questJournalCondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IJournalConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(JournalCondition, 0x40);
} // namespace quest
using questJournalCondition = quest::JournalCondition;
} // namespace RED4ext

// clang-format on
