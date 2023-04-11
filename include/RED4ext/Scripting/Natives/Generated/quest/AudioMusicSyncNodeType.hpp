#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MusicSyncType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct AudioMusicSyncNodeType : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questAudioMusicSyncNodeType";
    static constexpr const char* ALIAS = NAME;

    audio::MusicSyncType syncType; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    CName syncTrack; // 48
    CName userCue; // 50
    CString description; // 58
};
RED4EXT_ASSERT_SIZE(AudioMusicSyncNodeType, 0x78);
} // namespace quest
using questAudioMusicSyncNodeType = quest::AudioMusicSyncNodeType;
} // namespace RED4ext

// clang-format on
