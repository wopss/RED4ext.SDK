#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct TrajectoryParams : IScriptable
{
    static constexpr const char* NAME = "gameprojectileTrajectoryParams";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TrajectoryParams, 0x40);
} // namespace game::projectile
using gameprojectileTrajectoryParams = game::projectile::TrajectoryParams;
} // namespace RED4ext

// clang-format on
