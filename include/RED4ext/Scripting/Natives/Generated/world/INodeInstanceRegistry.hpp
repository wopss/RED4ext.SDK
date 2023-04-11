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
struct INodeInstanceRegistry : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldINodeInstanceRegistry";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(INodeInstanceRegistry, 0x48);
} // namespace world
using worldINodeInstanceRegistry = world::INodeInstanceRegistry;
} // namespace RED4ext

// clang-format on
