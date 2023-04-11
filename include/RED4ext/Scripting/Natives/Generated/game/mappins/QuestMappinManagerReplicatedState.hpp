#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/DynamicQuestMappinRepInfo.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct QuestMappinManagerReplicatedState
{
    static constexpr const char* NAME = "gamemappinsQuestMappinManagerReplicatedState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
    DynArray<game::mappins::DynamicQuestMappinRepInfo> dynamicQuestMappinRepInfo; // 18
    uint8_t unk28[0x38 - 0x28]; // 28
};
RED4EXT_ASSERT_SIZE(QuestMappinManagerReplicatedState, 0x38);
} // namespace game::mappins
using gamemappinsQuestMappinManagerReplicatedState = game::mappins::QuestMappinManagerReplicatedState;
} // namespace RED4ext

// clang-format on
