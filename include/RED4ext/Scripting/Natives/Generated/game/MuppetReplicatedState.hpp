#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetState.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IEntityState.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) MuppetReplicatedState : net::IEntityState
{
    static constexpr const char* NAME = "gameMuppetReplicatedState";
    static constexpr const char* ALIAS = NAME;

    game::MuppetState state; // 50
    EulerAngles initialOrientation; // 300
    Vector3 initialLocation; // 30C
    float health; // 318
    float armor; // 31C
};
RED4EXT_ASSERT_SIZE(MuppetReplicatedState, 0x320);
} // namespace game
using gameMuppetReplicatedState = game::MuppetReplicatedState;
} // namespace RED4ext

// clang-format on
