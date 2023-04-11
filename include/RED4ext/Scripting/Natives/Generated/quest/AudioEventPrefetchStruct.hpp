#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AudioEventPrefetchMode.hpp>

namespace RED4ext
{
namespace quest
{
struct AudioEventPrefetchStruct
{
    static constexpr const char* NAME = "questAudioEventPrefetchStruct";
    static constexpr const char* ALIAS = NAME;

    CName eventName; // 00
    quest::AudioEventPrefetchMode mode; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(AudioEventPrefetchStruct, 0x10);
} // namespace quest
using questAudioEventPrefetchStruct = quest::AudioEventPrefetchStruct;
} // namespace RED4ext

// clang-format on
