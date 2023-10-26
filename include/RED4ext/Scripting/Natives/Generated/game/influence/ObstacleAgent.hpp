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
struct __declspec(align(0x10)) ObstacleAgent : game::influence::IAgent
{
    static constexpr const char* NAME = "gameinfluenceObstacleAgent";
    static constexpr const char* ALIAS = "InfluenceObstacleAgent";

    uint8_t unk08[0x78 - 0x8]; // 8
    float radius; // 78
    uint8_t unk7C[0x7D - 0x7C]; // 7C
    bool useMeshes; // 7D
    uint8_t unk7E[0xC0 - 0x7E]; // 7E
};
RED4EXT_ASSERT_SIZE(ObstacleAgent, 0xC0);
} // namespace game::influence
using gameinfluenceObstacleAgent = game::influence::ObstacleAgent;
using InfluenceObstacleAgent = game::influence::ObstacleAgent;
} // namespace RED4ext

// clang-format on
