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
struct ObstacleAgent : game::influence::IAgent
{
    static constexpr const char* NAME = "gameinfluenceObstacleAgent";
    static constexpr const char* ALIAS = "InfluenceObstacleAgent";

    uint8_t unk08[0x70 - 0x8]; // 8
    float radius; // 70
    uint8_t unk74[0x75 - 0x74]; // 74
    bool useMeshes; // 75
    uint8_t unk76[0xB0 - 0x76]; // 76
};
RED4EXT_ASSERT_SIZE(ObstacleAgent, 0xB0);
} // namespace game::influence
using gameinfluenceObstacleAgent = game::influence::ObstacleAgent;
using InfluenceObstacleAgent = game::influence::ObstacleAgent;
} // namespace RED4ext

// clang-format on
