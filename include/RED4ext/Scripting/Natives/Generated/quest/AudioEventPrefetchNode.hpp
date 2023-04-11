#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AudioEventPrefetchStruct.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct AudioEventPrefetchNode : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questAudioEventPrefetchNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::AudioEventPrefetchStruct> prefetchEvents; // 40
};
RED4EXT_ASSERT_SIZE(AudioEventPrefetchNode, 0x50);
} // namespace quest
using questAudioEventPrefetchNode = quest::AudioEventPrefetchNode;
} // namespace RED4ext

// clang-format on
