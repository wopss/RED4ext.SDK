#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct IDynamicSpawnSystemConditionType; }

namespace quest
{
struct DynamicSpawnSystemCondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questDynamicSpawnSystemCondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IDynamicSpawnSystemConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(DynamicSpawnSystemCondition, 0x40);
} // namespace quest
using questDynamicSpawnSystemCondition = quest::DynamicSpawnSystemCondition;
} // namespace RED4ext

// clang-format on
