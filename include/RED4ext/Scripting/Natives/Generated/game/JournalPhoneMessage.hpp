#pragma once

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

namespace game { 
struct JournalPhoneMessage : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalPhoneMessage";
    static constexpr const char* ALIAS = "JournalPhoneMessage";

    LocalizationString text; // 60
    Handle<game::JournalPath> attachment; // 88
    TweakDBID imageId; // 98
    game::MessageSender sender; // A0
    float delay; // A4
};
RED4EXT_ASSERT_SIZE(JournalPhoneMessage, 0xA8);
} // namespace game
using JournalPhoneMessage = game::JournalPhoneMessage;
} // namespace RED4ext
