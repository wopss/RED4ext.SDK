#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/BaseRadioAnnouncementPlayer.hpp>

namespace RED4ext
{
namespace quest
{
struct RadioAnnouncementPlayer : audio::BaseRadioAnnouncementPlayer
{
    static constexpr const char* NAME = "questRadioAnnouncementPlayer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RadioAnnouncementPlayer, 0x8);
} // namespace quest
using questRadioAnnouncementPlayer = quest::RadioAnnouncementPlayer;
} // namespace RED4ext

// clang-format on
