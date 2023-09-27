#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalQuestMapPinBase.hpp>

namespace RED4ext
{
namespace game
{
struct JournalQuestMapPin : game::JournalQuestMapPinBase
{
    static constexpr const char* NAME = "gameJournalQuestMapPin";
    static constexpr const char* ALIAS = "JournalQuestMapPin";

    game::EntityReference reference; // 120
    uint8_t unk158[0x160 - 0x158]; // 158
};
RED4EXT_ASSERT_SIZE(JournalQuestMapPin, 0x160);
} // namespace game
using gameJournalQuestMapPin = game::JournalQuestMapPin;
using JournalQuestMapPin = game::JournalQuestMapPin;
} // namespace RED4ext

// clang-format on
