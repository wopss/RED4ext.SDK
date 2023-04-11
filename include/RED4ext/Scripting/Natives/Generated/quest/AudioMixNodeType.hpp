#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct AudioMixNodeType : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questAudioMixNodeType";
    static constexpr const char* ALIAS = NAME;

    CName mixSignpost; // 40
};
RED4EXT_ASSERT_SIZE(AudioMixNodeType, 0x48);
} // namespace quest
using questAudioMixNodeType = quest::AudioMixNodeType;
} // namespace RED4ext

// clang-format on
