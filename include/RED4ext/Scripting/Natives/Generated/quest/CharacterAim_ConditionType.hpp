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
struct CharacterAim_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterAim_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference targetRef; // 78
    bool preciseAiming; // B0
    uint8_t unkB1[0xB8 - 0xB1]; // B1
};
RED4EXT_ASSERT_SIZE(CharacterAim_ConditionType, 0xB8);
} // namespace quest
using questCharacterAim_ConditionType = quest::CharacterAim_ConditionType;
} // namespace RED4ext

// clang-format on
