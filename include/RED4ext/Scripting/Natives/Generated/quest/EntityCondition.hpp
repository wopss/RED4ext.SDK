#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct IEntityConditionType; }

namespace quest
{
struct EntityCondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questEntityCondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IEntityConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(EntityCondition, 0x40);
} // namespace quest
using questEntityCondition = quest::EntityCondition;
} // namespace RED4ext

// clang-format on
