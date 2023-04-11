#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct ISystemConditionType; }

namespace quest
{
struct SystemCondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questSystemCondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ISystemConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(SystemCondition, 0x40);
} // namespace quest
using questSystemCondition = quest::SystemCondition;
} // namespace RED4ext

// clang-format on
