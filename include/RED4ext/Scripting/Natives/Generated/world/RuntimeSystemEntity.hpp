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
struct RuntimeSystemEntity : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemEntity";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xA8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemEntity, 0xA8);
} // namespace world
using worldRuntimeSystemEntity = world::RuntimeSystemEntity;
} // namespace RED4ext

// clang-format on
