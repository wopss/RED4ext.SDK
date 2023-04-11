#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SceneTierData.hpp>

namespace RED4ext
{
namespace game
{
struct SceneTier1Data : game::SceneTierData
{
    static constexpr const char* NAME = "gameSceneTier1Data";
    static constexpr const char* ALIAS = "SceneTier1Data";

};
RED4EXT_ASSERT_SIZE(SceneTier1Data, 0x68);
} // namespace game
using gameSceneTier1Data = game::SceneTier1Data;
using SceneTier1Data = game::SceneTier1Data;
} // namespace RED4ext

// clang-format on
