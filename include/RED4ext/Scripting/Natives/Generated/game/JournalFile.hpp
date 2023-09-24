#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
struct Bink;

namespace game
{
struct JournalFile : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalFile";
    static constexpr const char* ALIAS = "JournalFile";

    LocalizationString title; // 70
    LocalizationString content; // 98
    RaRef<Bink> videoResource; // C0
    CString PictureFilename_legacy_; // C8 -- PictureFilename(legacy)
    TweakDBID pictureTweak; // E8
};
RED4EXT_ASSERT_SIZE(JournalFile, 0xF0);
} // namespace game
using gameJournalFile = game::JournalFile;
using JournalFile = game::JournalFile;
} // namespace RED4ext

// clang-format on
