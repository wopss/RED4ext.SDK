#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalTarotGroup : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalTarotGroup";
    static constexpr const char* ALIAS = "JournalTarotGroup";

};
RED4EXT_ASSERT_SIZE(JournalTarotGroup, 0xA0);
} // namespace game
using gameJournalTarotGroup = game::JournalTarotGroup;
using JournalTarotGroup = game::JournalTarotGroup;
} // namespace RED4ext

// clang-format on
