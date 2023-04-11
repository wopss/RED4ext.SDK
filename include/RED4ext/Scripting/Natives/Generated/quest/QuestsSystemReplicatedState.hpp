#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystemReplicatedState.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/QuestPrefabsEntry.hpp>

namespace RED4ext
{
namespace quest
{
struct QuestsSystemReplicatedState : game::IGameSystemReplicatedState
{
    static constexpr const char* NAME = "questQuestsSystemReplicatedState";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::QuestPrefabsEntry> replicatedQuestPrefabs; // 40
};
RED4EXT_ASSERT_SIZE(QuestsSystemReplicatedState, 0x50);
} // namespace quest
using questQuestsSystemReplicatedState = quest::QuestsSystemReplicatedState;
} // namespace RED4ext

// clang-format on
