#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/influence/IAgent.hpp>

namespace RED4ext
{
namespace game::influence { 
struct SeparationAgent : game::influence::IAgent
{
    static constexpr const char* NAME = "gameinfluenceSeparationAgent";
    static constexpr const char* ALIAS = "InfluenceSeparationAgent";

    uint8_t unk08[0x258 - 0x8]; // 8
    float radius; // 258
    uint8_t unk25C[0x2A0 - 0x25C]; // 25C
};
RED4EXT_ASSERT_SIZE(SeparationAgent, 0x2A0);
} // namespace game::influence
using InfluenceSeparationAgent = game::influence::SeparationAgent;
} // namespace RED4ext
