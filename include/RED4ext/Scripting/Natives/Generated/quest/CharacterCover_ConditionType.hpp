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
struct CharacterCover_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterCover_ConditionType";
    static constexpr const char* ALIAS = NAME;

    NodeRef coverRef; // 78
};
RED4EXT_ASSERT_SIZE(CharacterCover_ConditionType, 0x80);
} // namespace quest
using questCharacterCover_ConditionType = quest::CharacterCover_ConditionType;
} // namespace RED4ext

// clang-format on
