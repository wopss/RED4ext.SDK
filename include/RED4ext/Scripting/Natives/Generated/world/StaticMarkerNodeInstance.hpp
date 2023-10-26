#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SocketNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) StaticMarkerNodeInstance : world::SocketNodeInstance
{
    static constexpr const char* NAME = "worldStaticMarkerNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkA0[0xB0 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(StaticMarkerNodeInstance, 0xB0);
} // namespace world
using worldStaticMarkerNodeInstance = world::StaticMarkerNodeInstance;
} // namespace RED4ext

// clang-format on
