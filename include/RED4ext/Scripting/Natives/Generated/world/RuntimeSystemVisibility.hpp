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
struct RuntimeSystemVisibility : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemVisibility";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x100 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemVisibility, 0x100);
} // namespace world
using worldRuntimeSystemVisibility = world::RuntimeSystemVisibility;
} // namespace RED4ext

// clang-format on
