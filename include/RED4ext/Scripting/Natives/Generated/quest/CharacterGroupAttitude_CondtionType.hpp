#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/EAIAttitude.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterGroupAttitude_CondtionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterGroupAttitude_CondtionType";
    static constexpr const char* ALIAS = NAME;

    CName group1Name; // 78
    CName group2Name; // 80
    EAIAttitude attitude; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(CharacterGroupAttitude_CondtionType, 0x90);
} // namespace quest
using questCharacterGroupAttitude_CondtionType = quest::CharacterGroupAttitude_CondtionType;
} // namespace RED4ext

// clang-format on
