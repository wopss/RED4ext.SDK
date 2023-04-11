#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SocketNode.hpp>

namespace RED4ext
{
namespace AI { struct Spot; }
namespace world { struct TrafficSpotDefinition; }

namespace world
{
struct AISpotNode : world::SocketNode
{
    static constexpr const char* NAME = "worldAISpotNode";
    static constexpr const char* ALIAS = NAME;

    Handle<world::TrafficSpotDefinition> spotDef; // 38
    Handle<AI::Spot> spot; // 48
    DynArray<CName> markings; // 58
    red::TagList crowdWhitelist; // 68
    red::TagList crowdBlacklist; // 78
    bool useCrowdWhitelist; // 88
    bool useCrowdBlacklist; // 89
    bool isWorkspotInfinite; // 8A
    bool isWorkspotStatic; // 8B
    bool disableBumps; // 8C
    uint8_t unk8D[0x90 - 0x8D]; // 8D
    NodeRef lookAtTarget; // 90
};
RED4EXT_ASSERT_SIZE(AISpotNode, 0x98);
} // namespace world
using worldAISpotNode = world::AISpotNode;
} // namespace RED4ext

// clang-format on
