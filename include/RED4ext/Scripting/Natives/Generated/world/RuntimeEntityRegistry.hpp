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
struct RuntimeEntityRegistry : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeEntityRegistry";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xB8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeEntityRegistry, 0xB8);
} // namespace world
using worldRuntimeEntityRegistry = world::RuntimeEntityRegistry;
} // namespace RED4ext

// clang-format on
