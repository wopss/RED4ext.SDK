#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/WorldGlobalLightParameters.hpp>

namespace RED4ext
{
namespace world
{
struct WorldEnvironmentAreaParameters
{
    static constexpr const char* NAME = "worldWorldEnvironmentAreaParameters";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    world::WorldGlobalLightParameters globalLight; // 08
};
RED4EXT_ASSERT_SIZE(WorldEnvironmentAreaParameters, 0x130);
} // namespace world
using worldWorldEnvironmentAreaParameters = world::WorldEnvironmentAreaParameters;
} // namespace RED4ext

// clang-format on
