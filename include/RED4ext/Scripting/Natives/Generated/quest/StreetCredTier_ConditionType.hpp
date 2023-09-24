#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IStatsConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct StreetCredTier_ConditionType : quest::IStatsConditionType
{
    static constexpr const char* NAME = "questStreetCredTier_ConditionType";
    static constexpr const char* ALIAS = NAME;

    EComparisonType comparisonType; // 48
    TweakDBID tierID; // 4C
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(StreetCredTier_ConditionType, 0x58);
} // namespace quest
using questStreetCredTier_ConditionType = quest::StreetCredTier_ConditionType;
} // namespace RED4ext

// clang-format on
