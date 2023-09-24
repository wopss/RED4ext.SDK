#pragma once

// clang-format off

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

namespace game
{
struct JournalPointOfInterestMappin : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalPointOfInterestMappin";
    static constexpr const char* ALIAS = "JournalPointOfInterestMappin";

    NodeRef staticNodeRef; // 70
    game::EntityReference dynamicEntityRef; // 78
    NodeRef securityAreaRef; // B0
    game::mappins::PointOfInterestMappinData mappinData; // B8
    Vector3 offset; // 100
    uint8_t unk10C[0x110 - 0x10C]; // 10C
    Handle<game::JournalPath> questPath; // 110
    TweakDBID recommendedLevelID; // 120
    NodeRef notificationTriggerAreaRef; // 128
};
RED4EXT_ASSERT_SIZE(JournalPointOfInterestMappin, 0x130);
} // namespace game
using gameJournalPointOfInterestMappin = game::JournalPointOfInterestMappin;
using JournalPointOfInterestMappin = game::JournalPointOfInterestMappin;
} // namespace RED4ext

// clang-format on
