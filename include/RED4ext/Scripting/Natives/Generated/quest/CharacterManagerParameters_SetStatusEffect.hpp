#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest { struct RecordSelector; }

namespace quest
{
struct CharacterManagerParameters_SetStatusEffect : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetStatusEffect";
    static constexpr const char* ALIAS = NAME;

    bool isPlayerStatusEffectSource; // 70
    bool set; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
    Handle<quest::RecordSelector> recordSelector; // 78
    game::EntityReference statusEffectSourceObject; // 88
    TweakDBID statusEffectID; // C0
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetStatusEffect, 0xC8);
} // namespace quest
using questCharacterManagerParameters_SetStatusEffect = quest::CharacterManagerParameters_SetStatusEffect;
} // namespace RED4ext

// clang-format on
