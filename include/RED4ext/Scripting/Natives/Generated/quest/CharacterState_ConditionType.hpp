#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest { struct ICharacterConditionSubType; }

namespace quest
{
struct CharacterState_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterState_ConditionType";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ICharacterConditionSubType> subType; // 78
};
RED4EXT_ASSERT_SIZE(CharacterState_ConditionType, 0x88);
} // namespace quest
using questCharacterState_ConditionType = quest::CharacterState_ConditionType;
} // namespace RED4ext

// clang-format on
