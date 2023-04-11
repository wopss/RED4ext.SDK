#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MotionConstrainedTierDataParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SceneTierData.hpp>

namespace RED4ext
{
namespace game
{
struct SceneTierDataMotionConstrained : game::SceneTierData
{
    static constexpr const char* NAME = "gameSceneTierDataMotionConstrained";
    static constexpr const char* ALIAS = "SceneTierDataMotionConstrained";

    game::MotionConstrainedTierDataParams params; // 68
};
RED4EXT_ASSERT_SIZE(SceneTierDataMotionConstrained, 0x88);
} // namespace game
using gameSceneTierDataMotionConstrained = game::SceneTierDataMotionConstrained;
using SceneTierDataMotionConstrained = game::SceneTierDataMotionConstrained;
} // namespace RED4ext

// clang-format on
