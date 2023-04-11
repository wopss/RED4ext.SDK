#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GlobalLightingTrajectory.hpp>

namespace RED4ext
{
namespace world
{
struct WorldEnvironmentParameters
{
    static constexpr const char* NAME = "worldWorldEnvironmentParameters";
    static constexpr const char* ALIAS = NAME;

    GlobalLightingTrajectory globalLightingTrajectory; // 00
};
RED4EXT_ASSERT_SIZE(WorldEnvironmentParameters, 0x10);
} // namespace world
using worldWorldEnvironmentParameters = world::WorldEnvironmentParameters;
} // namespace RED4ext

// clang-format on
