#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalQuestMapPinBase.hpp>

namespace RED4ext
{
namespace game
{
struct JournalQuestMultiMapPin : game::JournalQuestMapPinBase
{
    static constexpr const char* NAME = "gameJournalQuestMultiMapPin";
    static constexpr const char* ALIAS = "JournalQuestMultiMapPin";

    DynArray<NodeRef> references; // 120
};
RED4EXT_ASSERT_SIZE(JournalQuestMultiMapPin, 0x130);
} // namespace game
using gameJournalQuestMultiMapPin = game::JournalQuestMultiMapPin;
using JournalQuestMultiMapPin = game::JournalQuestMultiMapPin;
} // namespace RED4ext

// clang-format on
