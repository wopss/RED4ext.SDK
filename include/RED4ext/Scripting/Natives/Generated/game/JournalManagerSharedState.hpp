#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystemReplicatedState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalSharedStateData.hpp>

namespace RED4ext
{
namespace game
{
struct JournalManagerSharedState : game::IGameSystemReplicatedState
{
    static constexpr const char* NAME = "gameJournalManagerSharedState";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::JournalSharedStateData> entryData; // 40
    uint32_t trackedQuestPath; // 50
    uint8_t unk54[0x70 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(JournalManagerSharedState, 0x70);
} // namespace game
using gameJournalManagerSharedState = game::JournalManagerSharedState;
} // namespace RED4ext

// clang-format on
