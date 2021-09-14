#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalOnscreen : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalOnscreen";
    static constexpr const char* ALIAS = "JournalOnscreen";

    CName tag; // 60
    LocalizationString title; // 68
    LocalizationString description; // 90
    TweakDBID iconID; // B8
};
RED4EXT_ASSERT_SIZE(JournalOnscreen, 0xC0);
} // namespace game
using JournalOnscreen = game::JournalOnscreen;
} // namespace RED4ext
