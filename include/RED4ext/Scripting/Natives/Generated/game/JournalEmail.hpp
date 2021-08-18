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
struct JournalEmail : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalEmail";
    static constexpr const char* ALIAS = "JournalEmail";

    LocalizationString sender; // 60
    LocalizationString addressee; // 88
    LocalizationString title; // B0
    LocalizationString content; // D8
    RaRef<Bink> videoResource; // 100
    TweakDBID pictureTweak; // 108
};
RED4EXT_ASSERT_SIZE(JournalEmail, 0x110);
} // namespace game
using JournalEmail = game::JournalEmail;
} // namespace RED4ext
