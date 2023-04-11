#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterReaction_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterReaction_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppetRef; // 78
    TweakDBID reactionBehaviorID; // B0
    bool isAnyReaction; // B8
    uint8_t unkB9[0xC0 - 0xB9]; // B9
};
RED4EXT_ASSERT_SIZE(CharacterReaction_ConditionType, 0xC0);
} // namespace quest
using questCharacterReaction_ConditionType = quest::CharacterReaction_ConditionType;
} // namespace RED4ext

// clang-format on
