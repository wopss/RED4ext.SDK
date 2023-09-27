#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalContainerEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/MappinData.hpp>

namespace RED4ext
{
namespace game
{
struct JournalQuestMapPinBase : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalQuestMapPinBase";
    static constexpr const char* ALIAS = "JournalQuestMapPinBase";

    CName slotName; // 88
    game::mappins::MappinData mappinData; // 90
    Vector3 offset; // 108
    TweakDBID uiAnimation; // 114
    bool enableGPS; // 11C
    uint8_t unk11D[0x120 - 0x11D]; // 11D
};
RED4EXT_ASSERT_SIZE(JournalQuestMapPinBase, 0x120);
} // namespace game
using gameJournalQuestMapPinBase = game::JournalQuestMapPinBase;
using JournalQuestMapPinBase = game::JournalQuestMapPinBase;
} // namespace RED4ext

// clang-format on
