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
struct IStatsSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIStatsSystem";
    static constexpr const char* ALIAS = "IStatsSystem";

};
RED4EXT_ASSERT_SIZE(IStatsSystem, 0x48);
} // namespace game
using gameIStatsSystem = game::IStatsSystem;
using IStatsSystem = game::IStatsSystem;
} // namespace RED4ext

// clang-format on
