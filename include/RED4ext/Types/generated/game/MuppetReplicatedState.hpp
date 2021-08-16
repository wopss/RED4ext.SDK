#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/EulerAngles.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>
#include <RED4ext/Types/generated/game/MuppetState.hpp>
#include <RED4ext/Types/generated/net/IEntityState.hpp>

namespace RED4ext
{
namespace game { 
struct MuppetReplicatedState : net::IEntityState
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
} // namespace RED4ext
