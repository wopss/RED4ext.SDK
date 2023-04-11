#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/Condition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TriggerConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct TriggerCondition : quest::Condition
{
    static constexpr const char* NAME = "questTriggerCondition";
    static constexpr const char* ALIAS = NAME;

    quest::TriggerConditionType type; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    NodeRef triggerAreaRef; // 40
    game::EntityReference activatorRef; // 48
    bool isPlayerActivator; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(TriggerCondition, 0x88);
} // namespace quest
using questTriggerCondition = quest::TriggerCondition;
} // namespace RED4ext

// clang-format on
