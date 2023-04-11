#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct VelocityParams
{
    static constexpr const char* NAME = "gameprojectileVelocityParams";
    static constexpr const char* ALIAS = NAME;

    float xFactor; // 00
    float yFactor; // 04
    float zFactor; // 08
};
RED4EXT_ASSERT_SIZE(VelocityParams, 0xC);
} // namespace game::projectile
using gameprojectileVelocityParams = game::projectile::VelocityParams;
} // namespace RED4ext

// clang-format on
