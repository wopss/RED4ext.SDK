#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEnvironmentManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/WorldGlobalLightOverrideWithColorParameters.hpp>

namespace RED4ext
{
namespace quest
{
struct __declspec(align(0x10)) PlayEnv_OverrideGlobalLight : quest::IEnvironmentManagerNodeType
{
    static constexpr const char* NAME = "questPlayEnv_OverrideGlobalLight";
    static constexpr const char* ALIAS = NAME;

    world::WorldGlobalLightOverrideWithColorParameters params; // 30
};
RED4EXT_ASSERT_SIZE(PlayEnv_OverrideGlobalLight, 0x60);
} // namespace quest
using questPlayEnv_OverrideGlobalLight = quest::PlayEnv_OverrideGlobalLight;
} // namespace RED4ext

// clang-format on
