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
struct RuntimeSystemSmartObjects : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemSmartObjects";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x2F8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemSmartObjects, 0x2F8);
} // namespace world
using worldRuntimeSystemSmartObjects = world::RuntimeSystemSmartObjects;
} // namespace RED4ext

// clang-format on
