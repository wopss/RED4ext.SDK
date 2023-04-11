#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IUpdatableSystem.hpp>

namespace RED4ext
{
namespace world
{
struct IRuntimeSystem : IUpdatableSystem
{
    static constexpr const char* NAME = "worldIRuntimeSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IRuntimeSystem, 0x48);
} // namespace world
using worldIRuntimeSystem = world::IRuntimeSystem;
} // namespace RED4ext

// clang-format on
