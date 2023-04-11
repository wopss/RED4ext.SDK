#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct ISensesConditionType; }

namespace quest
{
struct SensesCondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questSensesCondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ISensesConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(SensesCondition, 0x40);
} // namespace quest
using questSensesCondition = quest::SensesCondition;
} // namespace RED4ext

// clang-format on
