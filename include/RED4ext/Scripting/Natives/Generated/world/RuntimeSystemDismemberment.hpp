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
struct RuntimeSystemDismemberment : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemDismemberment";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x98 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemDismemberment, 0x98);
} // namespace world
using worldRuntimeSystemDismemberment = world::RuntimeSystemDismemberment;
} // namespace RED4ext

// clang-format on
