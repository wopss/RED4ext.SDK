#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionReplicatedState.hpp>

namespace RED4ext
{
namespace game
{
struct ActionEquipItemState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionEquipItemState";
    static constexpr const char* ALIAS = NAME;

    TweakDBID slotId; // 28
    ItemID itemId; // 30
    CName animFeatureNameRight; // 40
    CName animFeatureNameLeft; // 48
    float duration; // 50
    float spawnDelay; // 54
};
RED4EXT_ASSERT_SIZE(ActionEquipItemState, 0x58);
} // namespace game
using gameActionEquipItemState = game::ActionEquipItemState;
} // namespace RED4ext

// clang-format on
