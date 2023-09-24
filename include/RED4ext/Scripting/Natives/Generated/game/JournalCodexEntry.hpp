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
struct JournalCodexEntry : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalCodexEntry";
    static constexpr const char* ALIAS = "JournalCodexEntry";

    LocalizationString title; // 88
    TweakDBID imageId; // B0
    TweakDBID linkImageId; // B8
};
RED4EXT_ASSERT_SIZE(JournalCodexEntry, 0xC0);
} // namespace game
using gameJournalCodexEntry = game::JournalCodexEntry;
using JournalCodexEntry = game::JournalCodexEntry;
} // namespace RED4ext

// clang-format on
