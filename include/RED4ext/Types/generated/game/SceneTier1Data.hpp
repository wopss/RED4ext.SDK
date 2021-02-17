#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/SceneTierData.hpp>

namespace RED4ext
{
namespace game { 
struct SceneTier1Data : game::SceneTierData
{
    static constexpr const char* NAME = "gameSceneTier1Data";
    static constexpr const char* ALIAS = "SceneTier1Data";

};
RED4EXT_ASSERT_SIZE(SceneTier1Data, 0x48);
} // namespace game
using SceneTier1Data = game::SceneTier1Data;
} // namespace RED4ext
