#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest
{
struct IAudioCharacterManager_NodeSubTypeCharacterEntry
{
    static constexpr const char* NAME = "questIAudioCharacterManager_NodeSubTypeCharacterEntry";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppetRef; // 00
    bool isPlayer; // 38
    bool enableSubSystem; // 39
    uint8_t unk3A[0x40 - 0x3A]; // 3A
};
RED4EXT_ASSERT_SIZE(IAudioCharacterManager_NodeSubTypeCharacterEntry, 0x40);
} // namespace quest
using questIAudioCharacterManager_NodeSubTypeCharacterEntry = quest::IAudioCharacterManager_NodeSubTypeCharacterEntry;
} // namespace RED4ext

// clang-format on
