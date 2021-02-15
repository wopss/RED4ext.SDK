#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/Tier2WalkType.hpp>
#include <RED4ext/Types/generated/game/SceneTierData.hpp>

namespace RED4ext
{
namespace game { 
struct SceneTier2Data : game::SceneTierData
{
    static constexpr const char* NAME = "gameSceneTier2Data";
    static constexpr const char* ALIAS = "SceneTier2Data";

    Tier2WalkType walkType; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(SceneTier2Data, 0x50);
} // namespace game
using SceneTier2Data = game::SceneTier2Data;
} // namespace RED4ext
