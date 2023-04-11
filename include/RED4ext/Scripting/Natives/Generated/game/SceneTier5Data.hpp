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
struct SceneTier5Data : game::SceneTierDataMotionConstrained
{
    static constexpr const char* NAME = "gameSceneTier5Data";
    static constexpr const char* ALIAS = "SceneTier5Data";

};
RED4EXT_ASSERT_SIZE(SceneTier5Data, 0x88);
} // namespace game
using gameSceneTier5Data = game::SceneTier5Data;
using SceneTier5Data = game::SceneTier5Data;
} // namespace RED4ext

// clang-format on
