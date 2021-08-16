#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IStatsConditionType.hpp>

namespace RED4ext
{
namespace quest { 
struct StreetCredTier_ConditionType : quest::IStatsConditionType
{
    static constexpr const char* NAME = "questStreetCredTier_ConditionType";
    static constexpr const char* ALIAS = NAME;

    EComparisonType comparisonType; // 38
    TweakDBID tierID; // 3C
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(StreetCredTier_ConditionType, 0x48);
} // namespace quest
} // namespace RED4ext
