#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SocketNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct AISpotNodeInstance : world::SocketNodeInstance
{
    static constexpr const char* NAME = "worldAISpotNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkA0[0xE0 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(AISpotNodeInstance, 0xE0);
} // namespace world
} // namespace RED4ext
