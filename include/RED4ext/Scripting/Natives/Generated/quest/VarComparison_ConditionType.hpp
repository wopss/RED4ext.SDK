#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IFactsDBConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct VarComparison_ConditionType : quest::IFactsDBConditionType
{
    static constexpr const char* NAME = "questVarComparison_ConditionType";
    static constexpr const char* ALIAS = NAME;

    CString factName; // 38
    int32_t value; // 58
    EComparisonType comparisonType; // 5C
};
RED4EXT_ASSERT_SIZE(VarComparison_ConditionType, 0x60);
} // namespace quest
using questVarComparison_ConditionType = quest::VarComparison_ConditionType;
} // namespace RED4ext

// clang-format on
