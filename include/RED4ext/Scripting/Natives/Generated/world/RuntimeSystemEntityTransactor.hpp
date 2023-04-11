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
struct RuntimeSystemEntityTransactor : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemEntityTransactor";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemEntityTransactor, 0xA0);
} // namespace world
using worldRuntimeSystemEntityTransactor = world::RuntimeSystemEntityTransactor;
} // namespace RED4ext

// clang-format on
