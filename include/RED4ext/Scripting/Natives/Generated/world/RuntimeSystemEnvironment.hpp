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
struct __declspec(align(0x10)) RuntimeSystemEnvironment : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemEnvironment";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x210 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemEnvironment, 0x210);
} // namespace world
using worldRuntimeSystemEnvironment = world::RuntimeSystemEnvironment;
} // namespace RED4ext

// clang-format on
