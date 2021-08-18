#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalOnscreenGroup : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalOnscreenGroup";
    static constexpr const char* ALIAS = "JournalOnscreenGroup";

};
RED4EXT_ASSERT_SIZE(JournalOnscreenGroup, 0x90);
} // namespace game
using JournalOnscreenGroup = game::JournalOnscreenGroup;
} // namespace RED4ext
