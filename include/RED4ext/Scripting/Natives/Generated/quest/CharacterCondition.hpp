#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct ICharacterConditionType; }

namespace quest
{
struct CharacterCondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questCharacterCondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ICharacterConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(CharacterCondition, 0x40);
} // namespace quest
using questCharacterCondition = quest::CharacterCondition;
} // namespace RED4ext

// clang-format on
