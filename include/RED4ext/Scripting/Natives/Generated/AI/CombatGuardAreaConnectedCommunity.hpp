#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace AI { struct ICombatGuardAreaCondition; }

namespace AI
{
struct CombatGuardAreaConnectedCommunity
{
    static constexpr const char* NAME = "AICombatGuardAreaConnectedCommunity";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference communityArea; // 00
    DynArray<Handle<AI::ICombatGuardAreaCondition>> conditions; // 38
};
RED4EXT_ASSERT_SIZE(CombatGuardAreaConnectedCommunity, 0x48);
} // namespace AI
using AICombatGuardAreaConnectedCommunity = AI::CombatGuardAreaConnectedCommunity;
} // namespace RED4ext

// clang-format on
