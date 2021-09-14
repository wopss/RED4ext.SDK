#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalContainerEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalCodexEntry : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalCodexEntry";
    static constexpr const char* ALIAS = "JournalCodexEntry";

    LocalizationString title; // 78
    TweakDBID imageId; // A0
    TweakDBID linkImageId; // A8
};
RED4EXT_ASSERT_SIZE(JournalCodexEntry, 0xB0);
} // namespace game
using JournalCodexEntry = game::JournalCodexEntry;
} // namespace RED4ext
