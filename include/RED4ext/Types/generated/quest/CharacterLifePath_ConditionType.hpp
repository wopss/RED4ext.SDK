#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest { 
struct CharacterLifePath_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterLifePath_ConditionType";
    static constexpr const char* ALIAS = NAME;

    TweakDBID lifePathID; // 78
};
RED4EXT_ASSERT_SIZE(CharacterLifePath_ConditionType, 0x80);
} // namespace quest
} // namespace RED4ext
