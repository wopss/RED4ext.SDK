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
struct RuntimeSystemEntityVisualController : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemEntityVisualController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x180 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemEntityVisualController, 0x180);
} // namespace world
using worldRuntimeSystemEntityVisualController = world::RuntimeSystemEntityVisualController;
} // namespace RED4ext

// clang-format on
