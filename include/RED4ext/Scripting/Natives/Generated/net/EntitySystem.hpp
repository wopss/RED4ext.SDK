#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace net
{
struct EntitySystem : world::IRuntimeSystem
{
    static constexpr const char* NAME = "netEntitySystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(EntitySystem, 0x90);
} // namespace net
using netEntitySystem = net::EntitySystem;
} // namespace RED4ext

// clang-format on
