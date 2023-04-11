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
struct AudioSetListenerOverrideNodeType : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questAudioSetListenerOverrideNodeType";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(AudioSetListenerOverrideNodeType, 0x48);
} // namespace quest
using questAudioSetListenerOverrideNodeType = quest::AudioSetListenerOverrideNodeType;
} // namespace RED4ext

// clang-format on
