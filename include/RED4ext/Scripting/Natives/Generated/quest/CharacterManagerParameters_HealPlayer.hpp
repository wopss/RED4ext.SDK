#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerParameters_HealPlayer : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_HealPlayer";
    static constexpr const char* ALIAS = NAME;

    bool heal; // 70
    bool removeStatusEffects; // 71
    bool removeBuffs; // 72
    bool removeDebuffs; // 73
    bool resetCyberdeckRAM; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_HealPlayer, 0x78);
} // namespace quest
using questCharacterManagerParameters_HealPlayer = quest::CharacterManagerParameters_HealPlayer;
} // namespace RED4ext

// clang-format on
