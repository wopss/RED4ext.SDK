#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterCallReinforcements_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterCallReinforcements_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppetRef; // 78
};
RED4EXT_ASSERT_SIZE(CharacterCallReinforcements_ConditionType, 0xB0);
} // namespace quest
using questCharacterCallReinforcements_ConditionType = quest::CharacterCallReinforcements_ConditionType;
} // namespace RED4ext

// clang-format on
