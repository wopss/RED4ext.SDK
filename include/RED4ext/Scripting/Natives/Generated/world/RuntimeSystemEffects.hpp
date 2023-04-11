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
struct RuntimeSystemEffects : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemEffects";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xB0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemEffects, 0xB0);
} // namespace world
using worldRuntimeSystemEffects = world::RuntimeSystemEffects;
} // namespace RED4ext

// clang-format on
