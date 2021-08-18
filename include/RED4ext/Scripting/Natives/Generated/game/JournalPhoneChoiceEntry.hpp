#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalPhoneChoiceEntry : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalPhoneChoiceEntry";
    static constexpr const char* ALIAS = "JournalPhoneChoiceEntry";

    LocalizationString text; // 60
    bool isQuestImportant; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
};
RED4EXT_ASSERT_SIZE(JournalPhoneChoiceEntry, 0x90);
} // namespace game
using JournalPhoneChoiceEntry = game::JournalPhoneChoiceEntry;
} // namespace RED4ext
