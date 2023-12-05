#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MessageSender.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace game
{
struct JournalPhoneMessage : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalPhoneMessage";
    static constexpr const char* ALIAS = "JournalPhoneMessage";

    LocalizationString text; // 70
    Handle<game::JournalPath> attachment; // 98
    TweakDBID imageId; // A8
    game::MessageSender sender; // B0
    float delay; // B4
    bool isQuestImportant; // B8
    uint8_t unkB9[0xC0 - 0xB9]; // B9
};
RED4EXT_ASSERT_SIZE(JournalPhoneMessage, 0xC0);
} // namespace game
using gameJournalPhoneMessage = game::JournalPhoneMessage;
using JournalPhoneMessage = game::JournalPhoneMessage;
} // namespace RED4ext

// clang-format on
