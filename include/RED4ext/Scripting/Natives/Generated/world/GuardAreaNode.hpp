#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CombatGuardAreaConnectedCommunity.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/GuardAreaConnectedCommunity.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct GuardAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldGuardAreaNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<AI::GuardAreaConnectedCommunity> communityEntries; // 60
    DynArray<AI::CombatGuardAreaConnectedCommunity> combatCommunityEntries; // 70
    NodeRef pursuitArea; // 80
    float pursuitRange; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(GuardAreaNode, 0x90);
} // namespace world
using worldGuardAreaNode = world::GuardAreaNode;
} // namespace RED4ext

// clang-format on
