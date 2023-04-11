#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace world
{
struct RuntimeSystemScenes : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemScenes";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RuntimeSystemScenes, 0x48);
} // namespace world
using worldRuntimeSystemScenes = world::RuntimeSystemScenes;
} // namespace RED4ext

// clang-format on
