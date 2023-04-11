#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EmitterMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct PlaylistEmitterMetadata : audio::EmitterMetadata
{
    static constexpr const char* NAME = "audioPlaylistEmitterMetadata";
    static constexpr const char* ALIAS = NAME;

    CName receiverType; // 38
    CName playlistMetadataName; // 40
};
RED4EXT_ASSERT_SIZE(PlaylistEmitterMetadata, 0x48);
} // namespace audio
using audioPlaylistEmitterMetadata = audio::PlaylistEmitterMetadata;
} // namespace RED4ext

// clang-format on
