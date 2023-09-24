#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalOnscreen : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalOnscreen";
    static constexpr const char* ALIAS = "JournalOnscreen";

    CName tag; // 70
    LocalizationString title; // 78
    LocalizationString description; // A0
    TweakDBID iconID; // C8
};
RED4EXT_ASSERT_SIZE(JournalOnscreen, 0xD0);
} // namespace game
using gameJournalOnscreen = game::JournalOnscreen;
using JournalOnscreen = game::JournalOnscreen;
} // namespace RED4ext

// clang-format on
