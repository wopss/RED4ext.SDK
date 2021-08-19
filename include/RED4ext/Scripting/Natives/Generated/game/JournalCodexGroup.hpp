#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalContainerEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalCodexGroup : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalCodexGroup";
    static constexpr const char* ALIAS = NAME;

    LocalizationString groupName; // 78
};
RED4EXT_ASSERT_SIZE(JournalCodexGroup, 0xA0);
} // namespace game
} // namespace RED4ext
