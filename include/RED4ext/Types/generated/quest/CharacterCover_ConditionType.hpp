#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest { 
struct CharacterCover_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterCover_ConditionType";
    static constexpr const char* ALIAS = NAME;

    NodeRef coverRef; // 78
};
RED4EXT_ASSERT_SIZE(CharacterCover_ConditionType, 0x80);
} // namespace quest
} // namespace RED4ext
