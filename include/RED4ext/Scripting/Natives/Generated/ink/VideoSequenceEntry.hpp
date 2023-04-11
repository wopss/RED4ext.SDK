#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct Bink;

namespace ink
{
struct VideoSequenceEntry
{
    static constexpr const char* NAME = "inkVideoSequenceEntry";
    static constexpr const char* ALIAS = NAME;

    RaRef<Bink> videoResource; // 00
    CName audioEvent; // 08
    bool syncToAudio; // 10
    bool retriggerAudioOnLoop; // 11
    bool loop; // 12
    uint8_t unk13[0x18 - 0x13]; // 13
};
RED4EXT_ASSERT_SIZE(VideoSequenceEntry, 0x18);
} // namespace ink
using inkVideoSequenceEntry = ink::VideoSequenceEntry;
} // namespace RED4ext

// clang-format on
