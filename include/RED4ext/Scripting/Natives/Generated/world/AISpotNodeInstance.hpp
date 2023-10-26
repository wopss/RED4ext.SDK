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
struct __declspec(align(0x10)) AISpotNodeInstance : world::SocketNodeInstance
{
    static constexpr const char* NAME = "worldAISpotNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkA0[0xF0 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(AISpotNodeInstance, 0xF0);
} // namespace world
using worldAISpotNodeInstance = world::AISpotNodeInstance;
} // namespace RED4ext

// clang-format on
