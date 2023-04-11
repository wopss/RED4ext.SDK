#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace quest
{
struct RewardEvent : red::Event
{
    static constexpr const char* NAME = "questRewardEvent";
    static constexpr const char* ALIAS = "RewardEvent";

    TweakDBID rewardName; // 40
};
RED4EXT_ASSERT_SIZE(RewardEvent, 0x48);
} // namespace quest
using questRewardEvent = quest::RewardEvent;
using RewardEvent = quest::RewardEvent;
} // namespace RED4ext

// clang-format on
