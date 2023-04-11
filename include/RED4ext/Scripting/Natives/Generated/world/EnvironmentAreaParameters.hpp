#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldRenderAreaSettings.hpp>

namespace RED4ext
{
namespace world
{
struct EnvironmentAreaParameters : CResource
{
    static constexpr const char* NAME = "worldEnvironmentAreaParameters";
    static constexpr const char* ALIAS = NAME;

    WorldRenderAreaSettings renderAreaSettings; // 40
    uint8_t resourceVersion; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(EnvironmentAreaParameters, 0x58);
} // namespace world
using worldEnvironmentAreaParameters = world::EnvironmentAreaParameters;
} // namespace RED4ext

// clang-format on
