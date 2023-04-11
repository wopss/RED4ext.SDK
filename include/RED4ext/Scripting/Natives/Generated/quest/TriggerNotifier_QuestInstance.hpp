#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotiferInstance.hpp>

namespace RED4ext
{
namespace quest
{
struct TriggerNotifier_QuestInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "questTriggerNotifier_QuestInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x78 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(TriggerNotifier_QuestInstance, 0x78);
} // namespace quest
using questTriggerNotifier_QuestInstance = quest::TriggerNotifier_QuestInstance;
} // namespace RED4ext

// clang-format on
