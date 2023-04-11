#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Tier2WalkType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SceneTierData.hpp>

namespace RED4ext
{
namespace game
{
struct SceneTier2Data : game::SceneTierData
{
    static constexpr const char* NAME = "gameSceneTier2Data";
    static constexpr const char* ALIAS = "SceneTier2Data";

    Tier2WalkType walkType; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(SceneTier2Data, 0x70);
} // namespace game
using gameSceneTier2Data = game::SceneTier2Data;
using SceneTier2Data = game::SceneTier2Data;
} // namespace RED4ext

// clang-format on
