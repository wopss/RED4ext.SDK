#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio { 
struct PlaylistTrackEventStruct
{
    static constexpr const char* NAME = "audioPlaylistTrackEventStruct";
    static constexpr const char* ALIAS = NAME;

    CName playlistName; // 00
    CName trackName; // 08
};
RED4EXT_ASSERT_SIZE(PlaylistTrackEventStruct, 0x10);
} // namespace audio
} // namespace RED4ext
