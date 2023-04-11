#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalInternetBase.hpp>

namespace RED4ext
{
namespace game
{
struct JournalInternetText : game::JournalInternetBase
{
    static constexpr const char* NAME = "gameJournalInternetText";
    static constexpr const char* ALIAS = "JournalInternetText";

    LocalizationString text; // 70
};
RED4EXT_ASSERT_SIZE(JournalInternetText, 0x98);
} // namespace game
using gameJournalInternetText = game::JournalInternetText;
using JournalInternetText = game::JournalInternetText;
} // namespace RED4ext

// clang-format on
