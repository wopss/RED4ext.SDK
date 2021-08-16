#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SocketNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct StaticMarkerNodeInstance : world::SocketNodeInstance
{
    static constexpr const char* NAME = "worldStaticMarkerNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkA0[0xB0 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(StaticMarkerNodeInstance, 0xB0);
} // namespace world
} // namespace RED4ext
