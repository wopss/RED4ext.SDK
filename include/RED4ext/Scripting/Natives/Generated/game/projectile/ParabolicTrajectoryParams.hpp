#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/TrajectoryParams.hpp>

namespace RED4ext
{
namespace game::projectile { 
struct ParabolicTrajectoryParams : game::projectile::TrajectoryParams
{
    static constexpr const char* NAME = "gameprojectileParabolicTrajectoryParams";
    static constexpr const char* ALIAS = "ParabolicTrajectoryParams";

    uint8_t unk40[0x80 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ParabolicTrajectoryParams, 0x80);
} // namespace game::projectile
using ParabolicTrajectoryParams = game::projectile::ParabolicTrajectoryParams;
} // namespace RED4ext
