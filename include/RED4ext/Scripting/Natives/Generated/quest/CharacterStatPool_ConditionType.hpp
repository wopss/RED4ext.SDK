#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatPoolType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterStatPool_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterStatPool_ConditionType";
    static constexpr const char* ALIAS = NAME;

    float percent; // 78
    EComparisonType comparisonType; // 7C
    game::data::StatPoolType statPoolType; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(CharacterStatPool_ConditionType, 0x88);
} // namespace quest
using questCharacterStatPool_ConditionType = quest::CharacterStatPool_ConditionType;
} // namespace RED4ext

// clang-format on
