#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/WeakSpotReplicatedInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>

namespace RED4ext
{
namespace game
{
struct WeakspotComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "gameWeakspotComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::WeakSpotReplicatedInfo> WeakspotRepInfos; // 20
};
RED4EXT_ASSERT_SIZE(WeakspotComponentReplicatedState, 0x30);
} // namespace game
using gameWeakspotComponentReplicatedState = game::WeakspotComponentReplicatedState;
} // namespace RED4ext

// clang-format on
