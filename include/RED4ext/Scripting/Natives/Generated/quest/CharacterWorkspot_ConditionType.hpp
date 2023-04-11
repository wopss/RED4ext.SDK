#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterWorkspot_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterWorkspot_ConditionType";
    static constexpr const char* ALIAS = NAME;

    NodeRef spotRef; // 78
    CName animationName; // 80
    bool waitForAnimEnd; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
};
RED4EXT_ASSERT_SIZE(CharacterWorkspot_ConditionType, 0x90);
} // namespace quest
using questCharacterWorkspot_ConditionType = quest::CharacterWorkspot_ConditionType;
} // namespace RED4ext

// clang-format on
