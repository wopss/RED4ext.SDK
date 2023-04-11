#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct ITimeConditionType; }

namespace quest
{
struct TimeCondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questTimeCondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ITimeConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(TimeCondition, 0x40);
} // namespace quest
using questTimeCondition = quest::TimeCondition;
} // namespace RED4ext

// clang-format on
