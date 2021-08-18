#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalQuestMapPinBase.hpp>

namespace RED4ext
{
namespace game { 
struct JournalQuestMapPin : game::JournalQuestMapPinBase
{
    static constexpr const char* NAME = "gameJournalQuestMapPin";
    static constexpr const char* ALIAS = "JournalQuestMapPin";

    game::EntityReference reference; // 110
    uint8_t unk148[0x150 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(JournalQuestMapPin, 0x150);
} // namespace game
using JournalQuestMapPin = game::JournalQuestMapPin;
} // namespace RED4ext
