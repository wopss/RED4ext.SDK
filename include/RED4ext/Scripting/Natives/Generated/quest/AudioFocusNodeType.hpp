#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct AudioFocusNodeType : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questAudioFocusNodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AudioFocusNodeType, 0x40);
} // namespace quest
using questAudioFocusNodeType = quest::AudioFocusNodeType;
} // namespace RED4ext

// clang-format on
