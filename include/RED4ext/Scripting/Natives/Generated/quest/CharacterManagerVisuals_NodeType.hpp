#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManager_NodeType.hpp>

namespace RED4ext
{
namespace quest { struct ICharacterManagerVisuals_NodeSubType; }

namespace quest
{
struct CharacterManagerVisuals_NodeType : quest::ICharacterManager_NodeType
{
    static constexpr const char* NAME = "questCharacterManagerVisuals_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ICharacterManagerVisuals_NodeSubType> subtype; // 30
};
RED4EXT_ASSERT_SIZE(CharacterManagerVisuals_NodeType, 0x40);
} // namespace quest
using questCharacterManagerVisuals_NodeType = quest::CharacterManagerVisuals_NodeType;
} // namespace RED4ext

// clang-format on
