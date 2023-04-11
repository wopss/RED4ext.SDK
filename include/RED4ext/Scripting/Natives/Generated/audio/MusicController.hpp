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
struct MusicController
{
    static constexpr const char* NAME = "audioMusicController";
    static constexpr const char* ALIAS = NAME;

    CName muteEvent; // 00
    CName unmuteEvent; // 08
    CName playEvent; // 10
    CName stopEvent; // 18
};
RED4EXT_ASSERT_SIZE(MusicController, 0x20);
} // namespace audio
using audioMusicController = audio::MusicController;
} // namespace RED4ext

// clang-format on
