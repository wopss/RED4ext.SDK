#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterStatusEffect_CondtionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterStatusEffect_CondtionType";
    static constexpr const char* ALIAS = NAME;

    CString statusEffectID; // 78
    bool inverted; // 98
    uint8_t unk99[0xA0 - 0x99]; // 99
};
RED4EXT_ASSERT_SIZE(CharacterStatusEffect_CondtionType, 0xA0);
} // namespace quest
using questCharacterStatusEffect_CondtionType = quest::CharacterStatusEffect_CondtionType;
} // namespace RED4ext

// clang-format on
