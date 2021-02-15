#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/AI/SquadType.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/ICharacterManagerCombat_NodeSubType.hpp>

namespace RED4ext
{
namespace quest { 
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
} // namespace RED4ext
