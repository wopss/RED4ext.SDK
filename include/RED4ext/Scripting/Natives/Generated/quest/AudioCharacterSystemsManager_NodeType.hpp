#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioCharacterManager_NodeType.hpp>

namespace RED4ext
{
namespace quest { struct IAudioCharacterManager_NodeSubType; }

namespace quest
{
struct AudioCharacterSystemsManager_NodeType : quest::IAudioCharacterManager_NodeType
{
    static constexpr const char* NAME = "questAudioCharacterSystemsManager_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IAudioCharacterManager_NodeSubType> subType; // 30
};
RED4EXT_ASSERT_SIZE(AudioCharacterSystemsManager_NodeType, 0x40);
} // namespace quest
using questAudioCharacterSystemsManager_NodeType = quest::AudioCharacterSystemsManager_NodeType;
} // namespace RED4ext

// clang-format on
