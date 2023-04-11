#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct RadioTrack
{
    static constexpr const char* NAME = "audioRadioTrack";
    static constexpr const char* ALIAS = NAME;

    CName trackEventName; // 00
    CName localizationKey; // 08
    uint64_t primaryLocKey; // 10
    bool isStreamingFriendly; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(RadioTrack, 0x20);
} // namespace audio
using audioRadioTrack = audio::RadioTrack;
} // namespace RED4ext

// clang-format on
