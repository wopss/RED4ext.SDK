#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioCharacterManager_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct AudioCharacterManagerFootsteps_NodeSubType : quest::IAudioCharacterManager_NodeSubType
{
    static constexpr const char* NAME = "questAudioCharacterManagerFootsteps_NodeSubType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AudioCharacterManagerFootsteps_NodeSubType, 0x40);
} // namespace quest
using questAudioCharacterManagerFootsteps_NodeSubType = quest::AudioCharacterManagerFootsteps_NodeSubType;
} // namespace RED4ext

// clang-format on
