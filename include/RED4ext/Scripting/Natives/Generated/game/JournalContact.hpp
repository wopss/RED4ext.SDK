#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ContactType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalContact : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalContact";
    static constexpr const char* ALIAS = "JournalContact";

    LocalizationString name; // 90
    game::ContactType type; // B8
    TweakDBID avatarID; // BC
    bool useFlatMessageLayout; // C4
    uint8_t unkC5[0xC8 - 0xC5]; // C5
};
RED4EXT_ASSERT_SIZE(JournalContact, 0xC8);
} // namespace game
using JournalContact = game::JournalContact;
} // namespace RED4ext
