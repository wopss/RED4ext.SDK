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
struct JournalEmail : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalEmail";
    static constexpr const char* ALIAS = "JournalEmail";

    LocalizationString sender; // 70
    LocalizationString addressee; // 98
    LocalizationString title; // C0
    LocalizationString content; // E8
    RaRef<Bink> videoResource; // 110
    TweakDBID pictureTweak; // 118
};
RED4EXT_ASSERT_SIZE(JournalEmail, 0x120);
} // namespace game
using gameJournalEmail = game::JournalEmail;
using JournalEmail = game::JournalEmail;
} // namespace RED4ext

// clang-format on
