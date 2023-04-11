#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IAudioCharacterManager_NodeType; }

namespace quest
{
struct AudioCharacterManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questAudioCharacterManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IAudioCharacterManager_NodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(AudioCharacterManagerNodeDefinition, 0x58);
} // namespace quest
using questAudioCharacterManagerNodeDefinition = quest::AudioCharacterManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
