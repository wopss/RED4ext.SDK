#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GlobalLightingTrajectoryOverride.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) WorldGlobalLightOverrideWithColorParameters
{
    static constexpr const char* NAME = "worldWorldGlobalLightOverrideWithColorParameters";
    static constexpr const char* ALIAS = NAME;

    GlobalLightingTrajectoryOverride lightDirOverride; // 00
    HDRColor lightColorOverride; // 20
};
RED4EXT_ASSERT_SIZE(WorldGlobalLightOverrideWithColorParameters, 0x30);
} // namespace world
using worldWorldGlobalLightOverrideWithColorParameters = world::WorldGlobalLightOverrideWithColorParameters;
} // namespace RED4ext

// clang-format on
