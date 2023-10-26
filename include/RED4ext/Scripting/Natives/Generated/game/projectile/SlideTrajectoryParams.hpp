#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/TrajectoryParams.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct __declspec(align(0x10)) SlideTrajectoryParams : game::projectile::TrajectoryParams
{
    static constexpr const char* NAME = "gameprojectileSlideTrajectoryParams";
    static constexpr const char* ALIAS = "SlideTrajectoryParams";

    float stickiness; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
    Vector4 constAccel; // 50
};
RED4EXT_ASSERT_SIZE(SlideTrajectoryParams, 0x60);
} // namespace game::projectile
using gameprojectileSlideTrajectoryParams = game::projectile::SlideTrajectoryParams;
using SlideTrajectoryParams = game::projectile::SlideTrajectoryParams;
} // namespace RED4ext

// clang-format on
