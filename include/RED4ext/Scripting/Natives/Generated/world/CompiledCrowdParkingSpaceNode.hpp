#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world { 
struct CompiledCrowdParkingSpaceNode : world::Node
{
    static constexpr const char* NAME = "worldCompiledCrowdParkingSpaceNode";
    static constexpr const char* ALIAS = NAME;

    uint32_t crowdCreationIndex; // 38
    uint32_t parkingSpaceId; // 3C
};
RED4EXT_ASSERT_SIZE(CompiledCrowdParkingSpaceNode, 0x40);
} // namespace world
} // namespace RED4ext
