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
struct JournalOnscreenGroup : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalOnscreenGroup";
    static constexpr const char* ALIAS = "JournalOnscreenGroup";

};
RED4EXT_ASSERT_SIZE(JournalOnscreenGroup, 0xA0);
} // namespace game
using gameJournalOnscreenGroup = game::JournalOnscreenGroup;
using JournalOnscreenGroup = game::JournalOnscreenGroup;
} // namespace RED4ext

// clang-format on
