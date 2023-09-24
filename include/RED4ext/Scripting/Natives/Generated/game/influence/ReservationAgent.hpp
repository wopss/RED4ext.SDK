#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/influence/IAgent.hpp>

namespace RED4ext
{
namespace game::influence
{
struct ReservationAgent : game::influence::IAgent
{
    static constexpr const char* NAME = "gameinfluenceReservationAgent";
    static constexpr const char* ALIAS = "InfluenceReservationAgent";

    uint8_t unk08[0x4C - 0x8]; // 8
    float radius; // 4C
    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ReservationAgent, 0x58);
} // namespace game::influence
using gameinfluenceReservationAgent = game::influence::ReservationAgent;
using InfluenceReservationAgent = game::influence::ReservationAgent;
} // namespace RED4ext

// clang-format on
