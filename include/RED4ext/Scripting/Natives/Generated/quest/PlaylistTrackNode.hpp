#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/PlaylistTrackEventStruct.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct PlaylistTrackNode : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questPlaylistTrackNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::PlaylistTrackEventStruct> playlistEvents; // 40
    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(PlaylistTrackNode, 0x70);
} // namespace quest
using questPlaylistTrackNode = quest::PlaylistTrackNode;
} // namespace RED4ext

// clang-format on
