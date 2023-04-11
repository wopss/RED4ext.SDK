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
struct AudioCharacterManagerBreathing_NodeSubType : quest::IAudioCharacterManager_NodeSubType
{
    static constexpr const char* NAME = "questAudioCharacterManagerBreathing_NodeSubType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AudioCharacterManagerBreathing_NodeSubType, 0x40);
} // namespace quest
using questAudioCharacterManagerBreathing_NodeSubType = quest::AudioCharacterManagerBreathing_NodeSubType;
} // namespace RED4ext

// clang-format on
