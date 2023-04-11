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
struct CrowdPortalNode : world::Node
{
    static constexpr const char* NAME = "worldCrowdPortalNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CrowdPortalNode, 0x38);
} // namespace world
using worldCrowdPortalNode = world::CrowdPortalNode;
} // namespace RED4ext

// clang-format on
