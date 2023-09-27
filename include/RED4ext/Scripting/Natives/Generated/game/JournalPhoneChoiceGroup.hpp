#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalContainerEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalPhoneChoiceGroup : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalPhoneChoiceGroup";
    static constexpr const char* ALIAS = "JournalPhoneChoiceGroup";

};
RED4EXT_ASSERT_SIZE(JournalPhoneChoiceGroup, 0x88);
} // namespace game
using gameJournalPhoneChoiceGroup = game::JournalPhoneChoiceGroup;
using JournalPhoneChoiceGroup = game::JournalPhoneChoiceGroup;
} // namespace RED4ext

// clang-format on
