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
struct JournalFileGroup : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalFileGroup";
    static constexpr const char* ALIAS = "JournalFileGroup";

};
RED4EXT_ASSERT_SIZE(JournalFileGroup, 0xA0);
} // namespace game
using gameJournalFileGroup = game::JournalFileGroup;
using JournalFileGroup = game::JournalFileGroup;
} // namespace RED4ext

// clang-format on
