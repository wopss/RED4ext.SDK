#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct IUIConditionType; }

namespace quest
{
struct UICondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questUICondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IUIConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(UICondition, 0x40);
} // namespace quest
using questUICondition = quest::UICondition;
} // namespace RED4ext

// clang-format on
