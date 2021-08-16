#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/EComparisonType.hpp>
#include <RED4ext/Types/generated/game/data/StatPoolType.hpp>
#include <RED4ext/Types/generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest { 
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
} // namespace RED4ext
