#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalInternetBase.hpp>

namespace RED4ext
{
struct Bink;

namespace game
{
struct JournalInternetVideo : game::JournalInternetBase
{
    static constexpr const char* NAME = "gameJournalInternetVideo";
    static constexpr const char* ALIAS = "JournalInternetVideo";

    RaRef<Bink> videoResource; // 70
};
RED4EXT_ASSERT_SIZE(JournalInternetVideo, 0x78);
} // namespace game
using gameJournalInternetVideo = game::JournalInternetVideo;
using JournalInternetVideo = game::JournalInternetVideo;
} // namespace RED4ext

// clang-format on
