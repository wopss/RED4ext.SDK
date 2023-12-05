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
struct RuntimeSystemDestruction : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemDestruction";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xC00 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemDestruction, 0xC00);
} // namespace world
using worldRuntimeSystemDestruction = world::RuntimeSystemDestruction;
} // namespace RED4ext

// clang-format on
