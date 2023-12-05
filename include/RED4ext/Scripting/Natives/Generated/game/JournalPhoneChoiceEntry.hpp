#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace quest { struct IBaseCondition; }

namespace game
{
struct JournalPhoneChoiceEntry : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalPhoneChoiceEntry";
    static constexpr const char* ALIAS = "JournalPhoneChoiceEntry";

    LocalizationString text; // 70
    bool isQuestImportant; // 98
    uint8_t unk99[0xA0 - 0x99]; // 99
    Handle<quest::IBaseCondition> questCondition; // A0
};
RED4EXT_ASSERT_SIZE(JournalPhoneChoiceEntry, 0xB0);
} // namespace game
using gameJournalPhoneChoiceEntry = game::JournalPhoneChoiceEntry;
using JournalPhoneChoiceEntry = game::JournalPhoneChoiceEntry;
} // namespace RED4ext

// clang-format on
