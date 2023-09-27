#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/FiniteRoleType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterRoleFinished_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterRoleFinished_ConditionType";
    static constexpr const char* ALIAS = NAME;

    AI::FiniteRoleType role; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(CharacterRoleFinished_ConditionType, 0x80);
} // namespace quest
using questCharacterRoleFinished_ConditionType = quest::CharacterRoleFinished_ConditionType;
} // namespace RED4ext

// clang-format on
