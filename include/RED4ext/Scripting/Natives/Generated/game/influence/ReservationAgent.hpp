#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/influence/IAgent.hpp>

namespace RED4ext
{
namespace game::influence { 
struct ReservationAgent : game::influence::IAgent
{
    static constexpr const char* NAME = "gameinfluenceReservationAgent";
    static constexpr const char* ALIAS = "InfluenceReservationAgent";

    uint8_t unk08[0x44 - 0x8]; // 8
    float radius; // 44
    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ReservationAgent, 0x50);
} // namespace game::influence
using InfluenceReservationAgent = game::influence::ReservationAgent;
} // namespace RED4ext
