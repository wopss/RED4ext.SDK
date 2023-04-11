#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace AI
{
struct GuardAreaConnectedCommunity
{
    static constexpr const char* NAME = "AIGuardAreaConnectedCommunity";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference communityArea; // 00
    bool isPrimary; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(GuardAreaConnectedCommunity, 0x40);
} // namespace AI
using AIGuardAreaConnectedCommunity = AI::GuardAreaConnectedCommunity;
} // namespace RED4ext

// clang-format on
