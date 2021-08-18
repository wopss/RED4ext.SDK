#pragma once

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
namespace game { 
struct JournalQuestMapPinBase : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalQuestMapPinBase";
    static constexpr const char* ALIAS = "JournalQuestMapPinBase";

    CName slotName; // 78
    game::mappins::MappinData mappinData; // 80
    Vector3 offset; // F8
    TweakDBID uiAnimation; // 104
    bool enableGPS; // 10C
    uint8_t unk10D[0x110 - 0x10D]; // 10D
};
RED4EXT_ASSERT_SIZE(JournalQuestMapPinBase, 0x110);
} // namespace game
using JournalQuestMapPinBase = game::JournalQuestMapPinBase;
} // namespace RED4ext
