#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/SceneTierDataMotionConstrained.hpp>

namespace RED4ext
{
namespace game { 
struct SceneTier4Data : game::SceneTierDataMotionConstrained
{
    static constexpr const char* NAME = "gameSceneTier4Data";
    static constexpr const char* ALIAS = "SceneTier4Data";

};
RED4EXT_ASSERT_SIZE(SceneTier4Data, 0x68);
} // namespace game
using SceneTier4Data = game::SceneTier4Data;
} // namespace RED4ext
