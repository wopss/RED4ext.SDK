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

    uint8_t unk08[0x248 - 0x8]; // 8
    float radius; // 248
    uint8_t unk24C[0x280 - 0x24C]; // 24C
};
RED4EXT_ASSERT_SIZE(SeparationAgent, 0x280);
} // namespace game::influence
using InfluenceSeparationAgent = game::influence::SeparationAgent;
} // namespace RED4ext
