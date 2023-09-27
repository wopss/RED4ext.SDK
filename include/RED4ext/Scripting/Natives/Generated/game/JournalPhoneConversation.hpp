#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalContainerEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalPhoneConversation : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalPhoneConversation";
    static constexpr const char* ALIAS = "JournalPhoneConversation";

    LocalizationString title; // 88
};
RED4EXT_ASSERT_SIZE(JournalPhoneConversation, 0xB0);
} // namespace game
using gameJournalPhoneConversation = game::JournalPhoneConversation;
using JournalPhoneConversation = game::JournalPhoneConversation;
} // namespace RED4ext

// clang-format on
