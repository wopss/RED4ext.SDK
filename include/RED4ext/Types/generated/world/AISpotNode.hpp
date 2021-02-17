#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/red/TagList.hpp>
#include <RED4ext/Types/generated/world/GlobalNodeID.hpp>
#include <RED4ext/Types/generated/world/SocketNode.hpp>

namespace RED4ext
{
namespace AI { struct Spot; }
namespace world { struct TrafficSpotDefinition; }

namespace world { 
struct AISpotNode : world::SocketNode
{
    static constexpr const char* NAME = "worldAISpotNode";
    static constexpr const char* ALIAS = NAME;

    Handle<world::TrafficSpotDefinition> spotDef; // 38
    world::GlobalNodeID nearTrafficSrc; // 48
    Handle<AI::Spot> spot; // 50
    DynArray<CName> markings; // 60
    red::TagList crowdWhitelist; // 70
    red::TagList crowdBlacklist; // 80
    bool useCrowdWhitelist; // 90
    bool useCrowdBlacklist; // 91
    bool isWorkspotInfinite; // 92
    bool isWorkspotStatic; // 93
    bool disableBumps; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
    NodeRef lookAtTarget; // 98
};
RED4EXT_ASSERT_SIZE(AISpotNode, 0xA0);
} // namespace world
} // namespace RED4ext
