#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterHealth_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterHealth_ConditionType";
    static constexpr const char* ALIAS = NAME;

    float percent; // 78
    EComparisonType comparisonType; // 7C
};
RED4EXT_ASSERT_SIZE(CharacterHealth_ConditionType, 0x80);
} // namespace quest
using questCharacterHealth_ConditionType = quest::CharacterHealth_ConditionType;
} // namespace RED4ext

// clang-format on
