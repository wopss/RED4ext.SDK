#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/UICondition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct UIElement_ConditionType : quest::IUIConditionType
{
    static constexpr const char* NAME = "questUIElement_ConditionType";
    static constexpr const char* ALIAS = NAME;

    TweakDBID element; // 38
    game::data::UICondition condition; // 40
    bool value; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(UIElement_ConditionType, 0x48);
} // namespace quest
using questUIElement_ConditionType = quest::UIElement_ConditionType;
} // namespace RED4ext

// clang-format on
