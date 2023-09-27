#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalImageEntry : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalImageEntry";
    static constexpr const char* ALIAS = "JournalImageEntry";

    TweakDBID imageId; // 70
    TweakDBID thumbnailImageId; // 78
};
RED4EXT_ASSERT_SIZE(JournalImageEntry, 0x80);
} // namespace game
using gameJournalImageEntry = game::JournalImageEntry;
using JournalImageEntry = game::JournalImageEntry;
} // namespace RED4ext

// clang-format on
