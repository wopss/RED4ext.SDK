#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManager_NodeType.hpp>

namespace RED4ext
{
namespace quest { struct ICharacterManagerParameters_NodeSubType; }

namespace quest
{
struct CharacterManagerParameters_NodeType : quest::ICharacterManager_NodeType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ICharacterManagerParameters_NodeSubType> subtype; // 30
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_NodeType, 0x40);
} // namespace quest
using questCharacterManagerParameters_NodeType = quest::CharacterManagerParameters_NodeType;
} // namespace RED4ext

// clang-format on
