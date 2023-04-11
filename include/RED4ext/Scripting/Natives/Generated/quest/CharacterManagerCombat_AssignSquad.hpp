#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SquadType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerCombat_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerCombat_AssignSquad : quest::ICharacterManagerCombat_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerCombat_AssignSquad";
    static constexpr const char* ALIAS = NAME;

    TweakDBID presetID; // 70
    game::EntityReference puppetRef; // 78
    AI::SquadType squadType; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(CharacterManagerCombat_AssignSquad, 0xB8);
} // namespace quest
using questCharacterManagerCombat_AssignSquad = quest::CharacterManagerCombat_AssignSquad;
} // namespace RED4ext

// clang-format on
