#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world { 
struct TrafficCompiledNode : world::Node
{
    static constexpr const char* NAME = "worldTrafficCompiledNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x50 - 0x38]; // 38
    Box aabb; // 50
};
RED4EXT_ASSERT_SIZE(TrafficCompiledNode, 0x70);
} // namespace world
} // namespace RED4ext
