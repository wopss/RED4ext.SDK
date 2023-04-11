#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterEquippedItem_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterEquippedItem_ConditionType";
    static constexpr const char* ALIAS = NAME;

    bool isPlayer; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    game::EntityReference puppetRef; // 80
    TweakDBID itemID; // B8
    CName itemTag; // C0
    DynArray<TweakDBID> excludedTweakDBIDs; // C8
    DynArray<CName> excludedTags; // D8
    bool inverted; // E8
    uint8_t unkE9[0xF0 - 0xE9]; // E9
};
RED4EXT_ASSERT_SIZE(CharacterEquippedItem_ConditionType, 0xF0);
} // namespace quest
using questCharacterEquippedItem_ConditionType = quest::CharacterEquippedItem_ConditionType;
} // namespace RED4ext

// clang-format on
