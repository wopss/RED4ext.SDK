#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class MusicSyncType : int32_t
{
    Bar = 0,
    Beat = 1,
    Grid = 2,
    User = 3,
    Transition = 4,
    EntryCue = 5,
    ExitCue = 6,
};
} // namespace audio
using audioMusicSyncType = audio::MusicSyncType;
} // namespace RED4ext

// clang-format on
