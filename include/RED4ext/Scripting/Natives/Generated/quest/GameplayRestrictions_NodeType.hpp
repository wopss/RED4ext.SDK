#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/GameplayRestrictionAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IGameManagerNonSignalStoppingNodeType.hpp>

namespace RED4ext
{
namespace quest
{
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
using questGameplayRestrictions_NodeType = quest::GameplayRestrictions_NodeType;
} // namespace RED4ext

// clang-format on
