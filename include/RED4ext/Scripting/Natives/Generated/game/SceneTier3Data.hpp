#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SceneTierDataMotionConstrained.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Tier3CameraSettings.hpp>

namespace RED4ext
{
namespace game
{
struct SceneTier3Data : game::SceneTierDataMotionConstrained
{
    static constexpr const char* NAME = "gameSceneTier3Data";
    static constexpr const char* ALIAS = "SceneTier3Data";

    game::Tier3CameraSettings cameraSettings; // 88
};
RED4EXT_ASSERT_SIZE(SceneTier3Data, 0xA0);
} // namespace game
using gameSceneTier3Data = game::SceneTier3Data;
using SceneTier3Data = game::SceneTier3Data;
} // namespace RED4ext

// clang-format on
