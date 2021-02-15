#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest { 
struct CharacterCombat_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterCombat_ConditionType";
    static constexpr const char* ALIAS = NAME;

    bool inverted; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
};
RED4EXT_ASSERT_SIZE(CharacterCombat_ConditionType, 0x80);
} // namespace quest
} // namespace RED4ext
