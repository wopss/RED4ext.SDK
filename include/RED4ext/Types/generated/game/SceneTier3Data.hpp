#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/SceneTierDataMotionConstrained.hpp>
#include <RED4ext/Types/generated/game/Tier3CameraSettings.hpp>

namespace RED4ext
{
namespace game { 
struct SceneTier3Data : game::SceneTierDataMotionConstrained
{
    static constexpr const char* NAME = "gameSceneTier3Data";
    static constexpr const char* ALIAS = "SceneTier3Data";

    game::Tier3CameraSettings cameraSettings; // 68
};
RED4EXT_ASSERT_SIZE(SceneTier3Data, 0x80);
} // namespace game
using SceneTier3Data = game::SceneTier3Data;
} // namespace RED4ext
