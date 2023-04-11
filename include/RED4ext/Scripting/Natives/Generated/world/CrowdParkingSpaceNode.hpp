#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct CrowdParkingSpaceNode : world::Node
{
    static constexpr const char* NAME = "worldCrowdParkingSpaceNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CrowdParkingSpaceNode, 0x38);
} // namespace world
using worldCrowdParkingSpaceNode = world::CrowdParkingSpaceNode;
} // namespace RED4ext

// clang-format on
