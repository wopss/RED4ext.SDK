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
struct RadioStationSongEventStruct
{
    static constexpr const char* NAME = "audioRadioStationSongEventStruct";
    static constexpr const char* ALIAS = NAME;

    CName radioStationName; // 00
    CName radioSongName; // 08
};
RED4EXT_ASSERT_SIZE(RadioStationSongEventStruct, 0x10);
} // namespace audio
using audioRadioStationSongEventStruct = audio::RadioStationSongEventStruct;
} // namespace RED4ext

// clang-format on
