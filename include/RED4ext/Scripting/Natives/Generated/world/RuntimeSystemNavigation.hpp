#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystemNavigation.hpp>

namespace RED4ext
{
namespace world
{
struct RuntimeSystemNavigation : world::IRuntimeSystemNavigation
{
    static constexpr const char* NAME = "worldRuntimeSystemNavigation";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x430 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemNavigation, 0x430);
} // namespace world
using worldRuntimeSystemNavigation = world::RuntimeSystemNavigation;
} // namespace RED4ext

// clang-format on
