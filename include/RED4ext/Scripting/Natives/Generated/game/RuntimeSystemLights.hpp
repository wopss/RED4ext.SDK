#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace game
{
struct RuntimeSystemLights : world::IRuntimeSystem
{
    static constexpr const char* NAME = "gameRuntimeSystemLights";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xD8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemLights, 0xD8);
} // namespace game
using gameRuntimeSystemLights = game::RuntimeSystemLights;
} // namespace RED4ext

// clang-format on
