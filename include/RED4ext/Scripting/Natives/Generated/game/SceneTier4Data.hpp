#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SceneTierDataMotionConstrained.hpp>

namespace RED4ext
{
namespace game
{
struct SceneTier4Data : game::SceneTierDataMotionConstrained
{
    static constexpr const char* NAME = "gameSceneTier4Data";
    static constexpr const char* ALIAS = "SceneTier4Data";

};
RED4EXT_ASSERT_SIZE(SceneTier4Data, 0x88);
} // namespace game
using gameSceneTier4Data = game::SceneTier4Data;
using SceneTier4Data = game::SceneTier4Data;
} // namespace RED4ext

// clang-format on
