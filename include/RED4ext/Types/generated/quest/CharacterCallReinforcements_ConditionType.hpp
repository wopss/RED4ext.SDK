#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest { 
struct CharacterCallReinforcements_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterCallReinforcements_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppetRef; // 78
};
RED4EXT_ASSERT_SIZE(CharacterCallReinforcements_ConditionType, 0xB0);
} // namespace quest
} // namespace RED4ext
