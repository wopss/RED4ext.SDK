#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest { struct ComparisonParam; }

namespace quest { 
struct CharacterKilled_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterKilled_ConditionType";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ComparisonParam> comparisonParams; // 78
    bool killed; // 88
    bool unconscious; // 89
    bool defeated; // 8A
    uint8_t unk8B[0x90 - 0x8B]; // 8B
};
RED4EXT_ASSERT_SIZE(CharacterKilled_ConditionType, 0x90);
} // namespace quest
} // namespace RED4ext
