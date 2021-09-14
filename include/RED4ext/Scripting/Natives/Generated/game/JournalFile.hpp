#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
struct Bink;

namespace game { 
struct JournalFile : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalFile";
    static constexpr const char* ALIAS = "JournalFile";

    LocalizationString title; // 60
    LocalizationString content; // 88
    RaRef<Bink> videoResource; // B0
    CString PictureFilename_legacy_; // B8 -- PictureFilename(legacy)
    TweakDBID pictureTweak; // D8
};
RED4EXT_ASSERT_SIZE(JournalFile, 0xE0);
} // namespace game
using JournalFile = game::JournalFile;
} // namespace RED4ext
