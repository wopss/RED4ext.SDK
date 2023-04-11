#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatusEffectReplicatedInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>

namespace RED4ext
{
namespace game
{
struct StatusEffectComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "gameStatusEffectComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::StatusEffectReplicatedInfo> replicatedInfo; // 20
    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(StatusEffectComponentReplicatedState, 0x40);
} // namespace game
using gameStatusEffectComponentReplicatedState = game::StatusEffectComponentReplicatedState;
} // namespace RED4ext

// clang-format on
