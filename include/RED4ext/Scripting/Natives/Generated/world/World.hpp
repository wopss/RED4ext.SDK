#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Prefab.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) World : world::Prefab
{
    static constexpr const char* NAME = "worldWorld";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(World, 0x2C0);
} // namespace world
using worldWorld = world::World;
} // namespace RED4ext

// clang-format on
