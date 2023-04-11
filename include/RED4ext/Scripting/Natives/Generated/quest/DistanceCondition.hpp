#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct IDistanceConditionType; }

namespace quest
{
struct DistanceCondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questDistanceCondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IDistanceConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(DistanceCondition, 0x40);
} // namespace quest
using questDistanceCondition = quest::DistanceCondition;
} // namespace RED4ext

// clang-format on
