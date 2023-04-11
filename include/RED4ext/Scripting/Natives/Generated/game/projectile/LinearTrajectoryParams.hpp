#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/TrajectoryParams.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct LinearTrajectoryParams : game::projectile::TrajectoryParams
{
    static constexpr const char* NAME = "gameprojectileLinearTrajectoryParams";
    static constexpr const char* ALIAS = "LinearTrajectoryParams";

    float startVel; // 40
    float acceleration; // 44
};
RED4EXT_ASSERT_SIZE(LinearTrajectoryParams, 0x48);
} // namespace game::projectile
using gameprojectileLinearTrajectoryParams = game::projectile::LinearTrajectoryParams;
using LinearTrajectoryParams = game::projectile::LinearTrajectoryParams;
} // namespace RED4ext

// clang-format on
