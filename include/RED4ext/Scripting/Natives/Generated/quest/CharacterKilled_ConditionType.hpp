#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest { struct ComparisonParam; }
namespace quest { struct UniversalRef; }

namespace quest
{
struct CharacterKilled_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterKilled_ConditionType";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ComparisonParam> comparisonParams; // 78
    Handle<quest::UniversalRef> source; // 88
    bool killed; // 98
    bool unconscious; // 99
    bool defeated; // 9A
    uint8_t unk9B[0xA0 - 0x9B]; // 9B
};
RED4EXT_ASSERT_SIZE(CharacterKilled_ConditionType, 0xA0);
} // namespace quest
using questCharacterKilled_ConditionType = quest::CharacterKilled_ConditionType;
} // namespace RED4ext

// clang-format on
