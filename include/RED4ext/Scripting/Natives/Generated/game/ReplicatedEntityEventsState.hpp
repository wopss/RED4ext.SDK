#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ReplicatedEntityEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace game
{
struct ReplicatedEntityEventsState
{
    static constexpr const char* NAME = "gameReplicatedEntityEventsState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    DynArray<game::ReplicatedEntityEvent> items; // 08
    net::Time lastAppliedActionsTime; // 18
};
RED4EXT_ASSERT_SIZE(ReplicatedEntityEventsState, 0x20);
} // namespace game
using gameReplicatedEntityEventsState = game::ReplicatedEntityEventsState;
} // namespace RED4ext

// clang-format on
