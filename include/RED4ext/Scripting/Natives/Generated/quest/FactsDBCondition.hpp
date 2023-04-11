#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct IFactsDBConditionType; }

namespace quest
{
struct FactsDBCondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questFactsDBCondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IFactsDBConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(FactsDBCondition, 0x40);
} // namespace quest
using questFactsDBCondition = quest::FactsDBCondition;
} // namespace RED4ext

// clang-format on
