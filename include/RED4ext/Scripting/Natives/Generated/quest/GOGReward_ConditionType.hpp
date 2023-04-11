#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct GOGReward_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questGOGReward_ConditionType";
    static constexpr const char* ALIAS = NAME;

    TweakDBID rewardRecordId; // 38
};
RED4EXT_ASSERT_SIZE(GOGReward_ConditionType, 0x40);
} // namespace quest
using questGOGReward_ConditionType = quest::GOGReward_ConditionType;
} // namespace RED4ext

// clang-format on
