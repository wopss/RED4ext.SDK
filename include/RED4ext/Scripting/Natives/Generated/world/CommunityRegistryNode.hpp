#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SpotPersistentData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CommunitySpawnSetNameToID.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CommunityRegistryItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace game { struct CrowdCreationDataRegistry; }

namespace world
{
struct CommunityRegistryNode : world::Node
{
    static constexpr const char* NAME = "worldCommunityRegistryNode";
    static constexpr const char* ALIAS = NAME;

    game::CommunitySpawnSetNameToID spawnSetNameToCommunityID; // 38
    Handle<game::CrowdCreationDataRegistry> crowdCreationRegistry; // 48
    DynArray<world::CommunityRegistryItem> communitiesData; // 58
    DynArray<AI::SpotPersistentData> workspotsPersistentData; // 68
    bool representsCrowd; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
};
RED4EXT_ASSERT_SIZE(CommunityRegistryNode, 0x80);
} // namespace world
using worldCommunityRegistryNode = world::CommunityRegistryNode;
} // namespace RED4ext

// clang-format on
