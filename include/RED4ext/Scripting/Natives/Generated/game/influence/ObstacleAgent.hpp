#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/influence/IAgent.hpp>

namespace RED4ext
{
namespace game::influence { 
struct ObstacleAgent : game::influence::IAgent
{
    static constexpr const char* NAME = "gameinfluenceObstacleAgent";
    static constexpr const char* ALIAS = "InfluenceObstacleAgent";

    uint8_t unk08[0x60 - 0x8]; // 8
    float radius; // 60
    uint8_t unk64[0x65 - 0x64]; // 64
    bool useMeshes; // 65
    uint8_t unk66[0xA0 - 0x66]; // 66
};
RED4EXT_ASSERT_SIZE(ObstacleAgent, 0xA0);
} // namespace game::influence
using InfluenceObstacleAgent = game::influence::ObstacleAgent;
} // namespace RED4ext
