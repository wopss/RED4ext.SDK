#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/PointOfInterestMappinData.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace game { 
struct JournalPointOfInterestMappin : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalPointOfInterestMappin";
    static constexpr const char* ALIAS = "JournalPointOfInterestMappin";

    NodeRef staticNodeRef; // 60
    game::EntityReference dynamicEntityRef; // 68
    NodeRef securityAreaRef; // A0
    game::mappins::PointOfInterestMappinData mappinData; // A8
    Vector3 offset; // C8
    uint8_t unkD4[0xD8 - 0xD4]; // D4
    Handle<game::JournalPath> questPath; // D8
    TweakDBID recommendedLevelID; // E8
    NodeRef notificationTriggerAreaRef; // F0
};
RED4EXT_ASSERT_SIZE(JournalPointOfInterestMappin, 0xF8);
} // namespace game
using JournalPointOfInterestMappin = game::JournalPointOfInterestMappin;
} // namespace RED4ext
