#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionsReplicationBuffer.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ReplicatedAnimControllerEventsState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ReplicatedEntityEventsState.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IEntityState.hpp>

namespace RED4ext
{
namespace game
{
struct PuppetReplicatedState : net::IEntityState
{
    static constexpr const char* NAME = "gamePuppetReplicatedState";
    static constexpr const char* ALIAS = NAME;

    game::ActionsReplicationBuffer actionsBuffer; // 50
    game::ReplicatedAnimControllerEventsState animEventsState; // 68
    game::ReplicatedEntityEventsState entityEventsState; // 88
    EulerAngles initialOrientation; // A8
    Vector3 initialLocation; // B4
    CName initialAppearance; // C0
    float health; // C8
    float armor; // CC
    bool hasCPOMissionData; // D0
    uint8_t unkD1[0xD8 - 0xD1]; // D1
    DynArray<CName> CPOMissionVotedHistory; // D8
};
RED4EXT_ASSERT_SIZE(PuppetReplicatedState, 0xE8);
} // namespace game
using gamePuppetReplicatedState = game::PuppetReplicatedState;
} // namespace RED4ext

// clang-format on
