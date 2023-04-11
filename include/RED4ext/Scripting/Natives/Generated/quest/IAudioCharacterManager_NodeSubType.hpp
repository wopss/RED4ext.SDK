#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioCharacterManager_NodeSubTypeCharacterEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/INodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct IAudioCharacterManager_NodeSubType : quest::INodeType
{
    static constexpr const char* NAME = "questIAudioCharacterManager_NodeSubType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::IAudioCharacterManager_NodeSubTypeCharacterEntry> characterEntries; // 30
};
RED4EXT_ASSERT_SIZE(IAudioCharacterManager_NodeSubType, 0x40);
} // namespace quest
using questIAudioCharacterManager_NodeSubType = quest::IAudioCharacterManager_NodeSubType;
} // namespace RED4ext

// clang-format on
