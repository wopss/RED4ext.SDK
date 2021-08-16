#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/quest/GameplayRestrictionAction.hpp>
#include <RED4ext/Types/generated/quest/IGameManagerNonSignalStoppingNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct GameplayRestrictions_NodeType : quest::IGameManagerNonSignalStoppingNodeType
{
    static constexpr const char* NAME = "questGameplayRestrictions_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::GameplayRestrictionAction action; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    CName source; // 40
    DynArray<TweakDBID> restrictionIDs; // 48
};
RED4EXT_ASSERT_SIZE(GameplayRestrictions_NodeType, 0x58);
} // namespace quest
} // namespace RED4ext
