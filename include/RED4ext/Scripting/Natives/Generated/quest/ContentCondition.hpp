#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct IContentConditionType; }

namespace quest
{
struct ContentCondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questContentCondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IContentConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(ContentCondition, 0x40);
} // namespace quest
using questContentCondition = quest::ContentCondition;
} // namespace RED4ext

// clang-format on
