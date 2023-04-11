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
struct HeatAgent : game::influence::IAgent
{
    static constexpr const char* NAME = "gameinfluenceHeatAgent";
    static constexpr const char* ALIAS = "HeatAgent";

    uint8_t unk08[0x4C - 0x8]; // 8
    float timeToNextUpdate; // 4C
    float heatRadius; // 50
    float heatValue; // 54
    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(HeatAgent, 0x60);
} // namespace game::influence
using gameinfluenceHeatAgent = game::influence::HeatAgent;
using HeatAgent = game::influence::HeatAgent;
} // namespace RED4ext

// clang-format on
