#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalContainerEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalPhoneConversation : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalPhoneConversation";
    static constexpr const char* ALIAS = "JournalPhoneConversation";

    LocalizationString title; // 78
};
RED4EXT_ASSERT_SIZE(JournalPhoneConversation, 0xA0);
} // namespace game
using JournalPhoneConversation = game::JournalPhoneConversation;
} // namespace RED4ext
