#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TriggerNotifier_QuestInstance.hpp>

namespace RED4ext
{
namespace quest
{
struct GatherTriggerNotifier_QuestInstance : quest::TriggerNotifier_QuestInstance
{
    static constexpr const char* NAME = "questGatherTriggerNotifier_QuestInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x90 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(GatherTriggerNotifier_QuestInstance, 0x90);
} // namespace quest
using questGatherTriggerNotifier_QuestInstance = quest::GatherTriggerNotifier_QuestInstance;
} // namespace RED4ext

// clang-format on
