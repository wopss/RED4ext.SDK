#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TriggerCondition.hpp>

namespace RED4ext
{
namespace quest
{
struct GatherTriggerCondition : quest::TriggerCondition
{
    static constexpr const char* NAME = "questGatherTriggerCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(GatherTriggerCondition, 0x88);
} // namespace quest
using questGatherTriggerCondition = quest::GatherTriggerCondition;
} // namespace RED4ext

// clang-format on
