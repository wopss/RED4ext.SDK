#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/EComparisonTypeEquality.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterState_PuppetSubType : quest::ICharacterConditionSubType
{
    static constexpr const char* NAME = "questCharacterState_PuppetSubType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppetRef; // 30
    quest::EComparisonTypeEquality upperBodyComparisonType; // 68
    int32_t upperBodyState; // 6C
    quest::EComparisonTypeEquality highLevelComparisonType; // 70
    int32_t highLevelState; // 74
    quest::EComparisonTypeEquality stanceComparisonType; // 78
    int32_t stanceState; // 7C
};
RED4EXT_ASSERT_SIZE(CharacterState_PuppetSubType, 0x80);
} // namespace quest
using questCharacterState_PuppetSubType = quest::CharacterState_PuppetSubType;
} // namespace RED4ext

// clang-format on
