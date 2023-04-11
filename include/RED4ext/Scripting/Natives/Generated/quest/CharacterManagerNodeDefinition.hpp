#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct ICharacterManager_NodeType; }

namespace quest
{
struct CharacterManagerNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questCharacterManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ICharacterManager_NodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(CharacterManagerNodeDefinition, 0x58);
} // namespace quest
using questCharacterManagerNodeDefinition = quest::CharacterManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
