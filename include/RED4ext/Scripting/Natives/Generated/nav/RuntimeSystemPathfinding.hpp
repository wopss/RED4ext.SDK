#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace nav
{
struct RuntimeSystemPathfinding : world::IRuntimeSystem
{
    static constexpr const char* NAME = "navRuntimeSystemPathfinding";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xD8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemPathfinding, 0xD8);
} // namespace nav
using navRuntimeSystemPathfinding = nav::RuntimeSystemPathfinding;
} // namespace RED4ext

// clang-format on
