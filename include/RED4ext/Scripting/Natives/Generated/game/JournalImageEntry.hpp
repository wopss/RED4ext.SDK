#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalImageEntry : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalImageEntry";
    static constexpr const char* ALIAS = "JournalImageEntry";

    TweakDBID imageId; // 60
    TweakDBID thumbnailImageId; // 68
};
RED4EXT_ASSERT_SIZE(JournalImageEntry, 0x70);
} // namespace game
using JournalImageEntry = game::JournalImageEntry;
} // namespace RED4ext
