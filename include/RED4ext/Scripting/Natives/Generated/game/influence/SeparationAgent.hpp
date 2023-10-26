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
struct __declspec(align(0x10)) SeparationAgent : game::influence::IAgent
{
    static constexpr const char* NAME = "gameinfluenceSeparationAgent";
    static constexpr const char* ALIAS = "InfluenceSeparationAgent";

    uint8_t unk08[0x268 - 0x8]; // 8
    float radius; // 268
    uint8_t unk26C[0x2C0 - 0x26C]; // 26C
};
RED4EXT_ASSERT_SIZE(SeparationAgent, 0x2C0);
} // namespace game::influence
using gameinfluenceSeparationAgent = game::influence::SeparationAgent;
using InfluenceSeparationAgent = game::influence::SeparationAgent;
} // namespace RED4ext

// clang-format on
