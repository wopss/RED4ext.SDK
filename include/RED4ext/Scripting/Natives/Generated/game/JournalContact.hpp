#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ContactType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalContact : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalContact";
    static constexpr const char* ALIAS = "JournalContact";

    LocalizationString name; // A0
    game::ContactType type; // C8
    TweakDBID avatarID; // CC
    bool useFlatMessageLayout; // D4
    bool isCallableDefault; // D5
    uint8_t unkD6[0xD8 - 0xD6]; // D6
};
RED4EXT_ASSERT_SIZE(JournalContact, 0xD8);
} // namespace game
using gameJournalContact = game::JournalContact;
using JournalContact = game::JournalContact;
} // namespace RED4ext

// clang-format on
