#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISensesConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Vision_ConditionType : quest::ISensesConditionType
{
    static constexpr const char* NAME = "questVision_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference observerPuppetRef; // 38
    game::EntityReference observedTargetRef; // 70
    bool isObservedTargetPlayer; // A8
    bool inverted; // A9
    bool isInstant; // AA
    uint8_t unkAB[0xB0 - 0xAB]; // AB
};
RED4EXT_ASSERT_SIZE(Vision_ConditionType, 0xB0);
} // namespace quest
using questVision_ConditionType = quest::Vision_ConditionType;
} // namespace RED4ext

// clang-format on
