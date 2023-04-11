#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct IStatsDataSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIStatsDataSystem";
    static constexpr const char* ALIAS = "IStatsDataSystem";

};
RED4EXT_ASSERT_SIZE(IStatsDataSystem, 0x48);
} // namespace game
using gameIStatsDataSystem = game::IStatsDataSystem;
using IStatsDataSystem = game::IStatsDataSystem;
} // namespace RED4ext

// clang-format on
