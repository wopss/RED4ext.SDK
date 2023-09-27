#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterQuickHackUploadBegin_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterQuickHackUploadBegin_ConditionType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CharacterQuickHackUploadBegin_ConditionType, 0x78);
} // namespace quest
using questCharacterQuickHackUploadBegin_ConditionType = quest::CharacterQuickHackUploadBegin_ConditionType;
} // namespace RED4ext

// clang-format on
