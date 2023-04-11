#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManager_NodeType.hpp>

namespace RED4ext
{
namespace quest { struct ICharacterManagerCombat_NodeSubType; }

namespace quest
{
struct CharacterManagerCombat_NodeType : quest::ICharacterManager_NodeType
{
    static constexpr const char* NAME = "questCharacterManagerCombat_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ICharacterManagerCombat_NodeSubType> subtype; // 30
};
RED4EXT_ASSERT_SIZE(CharacterManagerCombat_NodeType, 0x40);
} // namespace quest
using questCharacterManagerCombat_NodeType = quest::CharacterManagerCombat_NodeType;
} // namespace RED4ext

// clang-format on
